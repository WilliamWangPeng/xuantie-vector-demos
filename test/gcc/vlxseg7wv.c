
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

int16x7xm1_t test_vlxseg7wv_int16x7xm1_int16xm1 (const short *address, int16xm1_t index, unsigned int gvl) {
    return vlxseg7wv_int16x7xm1_int16xm1 (address, index, gvl);
}


int32x7xm1_t test_vlxseg7wv_int32x7xm1_int32xm1 (const int *address, int32xm1_t index, unsigned int gvl) {
    return vlxseg7wv_int32x7xm1_int32xm1 (address, index, gvl);
}


int64x7xm1_t test_vlxseg7wv_int64x7xm1_int64xm1 (const long *address, int64xm1_t index, unsigned int gvl) {
    return vlxseg7wv_int64x7xm1_int64xm1 (address, index, gvl);
}


int8x7xm1_t test_vlxseg7wv_int8x7xm1_int8xm1 (const signed char *address, int8xm1_t index, unsigned int gvl) {
    return vlxseg7wv_int8x7xm1_int8xm1 (address, index, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlxseg7w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlxseg7w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlxseg7w\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlxseg7w\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

