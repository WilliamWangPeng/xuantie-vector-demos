#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<riscv-vector.h>

#define vlen 128 
#define sew 16
#define vmul 1
#define ISUNSIGN 0
#define VCTYPE "uint16"

int main(int argc, char **argv) {
        int vlmax = vmul*vlen/sew;  // vmax <= 8/1
        int N=6;
	int nf=7;
        int avl[6] = {vlmax, vlmax-1, 2*vlmax-1, 2*vlmax+1000, 2*vlmax, 0};
        char *name = argv[0];

// define vector stride
        short int stride[vlmax];
        short int nstride[vlmax];
        for(int r1=0; r1<vlmax; r1++) {
		stride[r1] = -1*nf*r1;
		nstride[r1]=nf*r1;
        }

// initial args
        unsigned short int expect;
        uint16x7xm1_t bb;
        int rte = 0;
        int gvl=0;
        unsigned int vst = 0;
        long long max = 0;
        long long min = 0;
        unsigned char input0[20480*vlmax];
        unsigned char input2[20480*vlmax];
        for(int ff=0; ff<20480*vlmax; ff++) {
                input0[ff]=0;
                input2[ff]=0;
        }

// define input args
	 unsigned short int input1[7*vlmax];
	unsigned short int input3[7*vlmax];
        if (argc != 3*7*vlmax+1)
        {
                for(int j=0;j<7*vlmax;j++){
                        input1[j] = j;
                        input2[j] = j;
                        input3[j] = j;
                }
        } else {
        	for(int j=0;j<7*vlmax;j++){
        	        input1[j] = strtol(argv[j+1],0,10);
        	        input2[j] = strtol(argv[j+1+7*vlmax],0,10);
        	        input3[j] = strtol(argv[j+1+2*7*vlmax],0,10);
        	}
	}

// trans input to stride 
        int m=0, n=0;
	for(m=0; m< vlmax; m++) {
                if(m==0) {
                        for(n=0; n<nstride[1]; n++) {
                                input0[n+nstride[vlmax-1]] = input2[n];
                        }
                } else if(m==vlmax-1) {
                        for(n=0; n<nstride[1]; n++) {
                                input0[n] = input2[n+m*nf];
                        }

                } else {
                        for(n=0; n<nstride[m]-nstride[m-1]; n++ ) {
                                input0[n+nstride[vlmax-1-m]] = input2[n+m*nf];
                        }
                }
	}

	uint16x7xm1_t *a0 = (uint16x7xm1_t *)input1;
        const unsigned short int *a1 = (const unsigned short int *)&input0[nstride[vlmax-1]];
        uint16xm1_t *a7 = (uint16xm1_t *)stride;
	uint16xm1_t *a8 = (uint16xm1_t *)input3;
        e16xm1_t a3;
	unsigned short int *aa;

        for(int t=0; t<N; t++) {
                gvl = vsetvli(avl[t], RVV_E16, RVV_M1);
		a3 = vmsnevi_e16xm1_uint16xm1(*a8, 0, gvl);
                bb=vlxseg7buv_mask_uint16x7xm1_uint16xm1(*a0, a1, *a7, a3, gvl);
		aa = (unsigned short int *) &bb.v.val[0];
                for(int i=0; i<7*vlmax; i++) {
			if ( (i < avl[t] ) || (i < avl[t]+vlmax && i >= vlmax) || (i < avl[t]+2*vlmax && i >= 2*vlmax) || (i < avl[t]+3*vlmax && i >= 3*vlmax) || (i < avl[t]+4*vlmax && i >= 4*vlmax) || (i < avl[t]+5*vlmax && i >= 5*vlmax) || (i < avl[t]+6*vlmax && i >= 6*vlmax) || (i < avl[t]+7*vlmax && i >= 7*vlmax) )  {
				if( input3[i%vlmax]!=0 ) {
                       		                 if (i < vlmax)
                       		                         expect = input2[7*i];
                       		                 else if(i >= vlmax && i< 2*vlmax)
                       		                         expect = input2[7*(i-vlmax)+1];
                       		                 else if(i >= 2*vlmax && i< 3*vlmax)
                       		                         expect = input2[7*(i-2*vlmax)+2];
                       		                 else if (i >= 3*vlmax && i< 4*vlmax)
                       		                         expect = input2[7*(i-3*vlmax)+3];
                       		                 else if (i >= 4*vlmax && i< 5*vlmax)
                       		                         expect = input2[7*(i-4*vlmax)+4];
                       		                 else if (i >= 5*vlmax && i< 6*vlmax)
                       		                         expect = input2[7*(i-5*vlmax)+5];
                       		                 else if (i >= 6*vlmax && i< 7*vlmax)
                       		                         expect = input2[7*(i-6*vlmax)+6];
                       		                 else if (i >= 7*vlmax && i< 8*vlmax)
                       		                         expect = input2[7*(i-7*vlmax)+7];
				} else {
					expect = input1[i];
				}
		       } else {
                                expect =  0;
                       }

                        if ( aa[i]- expect != 0) {
                                rte = -1;
                        }
                        printf("Expect=%d,Actual=%d, avl=%d\n",expect, aa[i], avl[t]);
                }
        }

        if ( rte != 0 )
                printf("FAIL: %s\n",name);
        else
                printf("PASS: %s\n",name);
        return rte;
}