
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsseg2bv_int16x2xm1 (short *address, int16x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_int16x2xm1 (address, a, gvl);
}


void test_vsseg2bv_int16x2xm2 (short *address, int16x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_int16x2xm2 (address, a, gvl);
}


void test_vsseg2bv_int16x2xm4 (short *address, int16x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_int16x2xm4 (address, a, gvl);
}


void test_vsseg2bv_int32x2xm1 (int *address, int32x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_int32x2xm1 (address, a, gvl);
}


void test_vsseg2bv_int32x2xm2 (int *address, int32x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_int32x2xm2 (address, a, gvl);
}


void test_vsseg2bv_int32x2xm4 (int *address, int32x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_int32x2xm4 (address, a, gvl);
}


void test_vsseg2bv_int64x2xm1 (long *address, int64x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_int64x2xm1 (address, a, gvl);
}


void test_vsseg2bv_int64x2xm2 (long *address, int64x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_int64x2xm2 (address, a, gvl);
}


void test_vsseg2bv_int64x2xm4 (long *address, int64x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_int64x2xm4 (address, a, gvl);
}


void test_vsseg2bv_int8x2xm1 (signed char *address, int8x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_int8x2xm1 (address, a, gvl);
}


void test_vsseg2bv_int8x2xm2 (signed char *address, int8x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_int8x2xm2 (address, a, gvl);
}


void test_vsseg2bv_int8x2xm4 (signed char *address, int8x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_int8x2xm4 (address, a, gvl);
}


void test_vsseg2bv_uint16x2xm1 (unsigned short *address, uint16x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_uint16x2xm1 (address, a, gvl);
}


void test_vsseg2bv_uint16x2xm2 (unsigned short *address, uint16x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_uint16x2xm2 (address, a, gvl);
}


void test_vsseg2bv_uint16x2xm4 (unsigned short *address, uint16x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_uint16x2xm4 (address, a, gvl);
}


void test_vsseg2bv_uint32x2xm1 (unsigned int *address, uint32x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_uint32x2xm1 (address, a, gvl);
}


void test_vsseg2bv_uint32x2xm2 (unsigned int *address, uint32x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_uint32x2xm2 (address, a, gvl);
}


void test_vsseg2bv_uint32x2xm4 (unsigned int *address, uint32x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_uint32x2xm4 (address, a, gvl);
}


void test_vsseg2bv_uint64x2xm1 (unsigned long *address, uint64x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_uint64x2xm1 (address, a, gvl);
}


void test_vsseg2bv_uint64x2xm2 (unsigned long *address, uint64x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_uint64x2xm2 (address, a, gvl);
}


void test_vsseg2bv_uint64x2xm4 (unsigned long *address, uint64x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_uint64x2xm4 (address, a, gvl);
}


void test_vsseg2bv_uint8x2xm1 (unsigned char *address, uint8x2xm1_t a, unsigned int gvl) {
    return vsseg2bv_uint8x2xm1 (address, a, gvl);
}


void test_vsseg2bv_uint8x2xm2 (unsigned char *address, uint8x2xm2_t a, unsigned int gvl) {
    return vsseg2bv_uint8x2xm2 (address, a, gvl);
}


void test_vsseg2bv_uint8x2xm4 (unsigned char *address, uint8x2xm4_t a, unsigned int gvl) {
    return vsseg2bv_uint8x2xm4 (address, a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsseg2b\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvsseg2b\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

