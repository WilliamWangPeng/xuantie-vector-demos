
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

uint16x7xm1_t test_vlsseg7buv_uint16x7xm1 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg7buv_uint16x7xm1 (address, stride, gvl);
}


uint32x7xm1_t test_vlsseg7buv_uint32x7xm1 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg7buv_uint32x7xm1 (address, stride, gvl);
}


uint64x7xm1_t test_vlsseg7buv_uint64x7xm1 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg7buv_uint64x7xm1 (address, stride, gvl);
}


uint8x7xm1_t test_vlsseg7buv_uint8x7xm1 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg7buv_uint8x7xm1 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg7bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg7bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg7bu\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg7bu\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

