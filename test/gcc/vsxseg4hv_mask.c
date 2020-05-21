
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

void test_vsxseg4hv_mask_int16xm1_int16x4xm1 (short *address, int16xm1_t index, int16x4xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int16xm1_int16x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int16xm2_int16x4xm2 (short *address, int16xm2_t index, int16x4xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int16xm2_int16x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int32xm1_int32x4xm1 (int *address, int32xm1_t index, int32x4xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int32xm1_int32x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int32xm2_int32x4xm2 (int *address, int32xm2_t index, int32x4xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int32xm2_int32x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int64xm1_int64x4xm1 (long *address, int64xm1_t index, int64x4xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int64xm1_int64x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int64xm2_int64x4xm2 (long *address, int64xm2_t index, int64x4xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int64xm2_int64x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int8xm1_int8x4xm1 (signed char *address, int8xm1_t index, int8x4xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int8xm1_int8x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_int8xm2_int8x4xm2 (signed char *address, int8xm2_t index, int8x4xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_int8xm2_int8x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint16xm1_uint16x4xm1 (unsigned short *address, uint16xm1_t index, uint16x4xm1_t a, e16xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint16xm1_uint16x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint16xm2_uint16x4xm2 (unsigned short *address, uint16xm2_t index, uint16x4xm2_t a, e16xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint16xm2_uint16x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint32xm1_uint32x4xm1 (unsigned int *address, uint32xm1_t index, uint32x4xm1_t a, e32xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint32xm1_uint32x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint32xm2_uint32x4xm2 (unsigned int *address, uint32xm2_t index, uint32x4xm2_t a, e32xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint32xm2_uint32x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint64xm1_uint64x4xm1 (unsigned long *address, uint64xm1_t index, uint64x4xm1_t a, e64xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint64xm1_uint64x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint64xm2_uint64x4xm2 (unsigned long *address, uint64xm2_t index, uint64x4xm2_t a, e64xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint64xm2_uint64x4xm2 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint8xm1_uint8x4xm1 (unsigned char *address, uint8xm1_t index, uint8x4xm1_t a, e8xm1_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint8xm1_uint8x4xm1 (address, index, a, mask, gvl);
}


void test_vsxseg4hv_mask_uint8xm2_uint8x4xm2 (unsigned char *address, uint8xm2_t index, uint8x4xm2_t a, e8xm2_t mask, unsigned int gvl) {
    return vsxseg4hv_mask_uint8xm2_uint8x4xm2 (address, index, a, mask, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvsxseg4h\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvsxseg4h\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

