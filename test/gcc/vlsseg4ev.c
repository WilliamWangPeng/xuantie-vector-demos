
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32x4xm1_t test_vlsseg4ev_float32x4xm1 (const float *address, long stride, unsigned int gvl) {
    return vlsseg4ev_float32x4xm1 (address, stride, gvl);
}


float32x4xm2_t test_vlsseg4ev_float32x4xm2 (const float *address, long stride, unsigned int gvl) {
    return vlsseg4ev_float32x4xm2 (address, stride, gvl);
}


float64x4xm1_t test_vlsseg4ev_float64x4xm1 (const double *address, long stride, unsigned int gvl) {
    return vlsseg4ev_float64x4xm1 (address, stride, gvl);
}


float64x4xm2_t test_vlsseg4ev_float64x4xm2 (const double *address, long stride, unsigned int gvl) {
    return vlsseg4ev_float64x4xm2 (address, stride, gvl);
}


int16x4xm1_t test_vlsseg4ev_int16x4xm1 (const short *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int16x4xm1 (address, stride, gvl);
}


int16x4xm2_t test_vlsseg4ev_int16x4xm2 (const short *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int16x4xm2 (address, stride, gvl);
}


int32x4xm1_t test_vlsseg4ev_int32x4xm1 (const int *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int32x4xm1 (address, stride, gvl);
}


int32x4xm2_t test_vlsseg4ev_int32x4xm2 (const int *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int32x4xm2 (address, stride, gvl);
}


int64x4xm1_t test_vlsseg4ev_int64x4xm1 (const long *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int64x4xm1 (address, stride, gvl);
}


int64x4xm2_t test_vlsseg4ev_int64x4xm2 (const long *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int64x4xm2 (address, stride, gvl);
}


int8x4xm1_t test_vlsseg4ev_int8x4xm1 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int8x4xm1 (address, stride, gvl);
}


int8x4xm2_t test_vlsseg4ev_int8x4xm2 (const signed char *address, long stride, unsigned int gvl) {
    return vlsseg4ev_int8x4xm2 (address, stride, gvl);
}


uint16x4xm1_t test_vlsseg4ev_uint16x4xm1 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint16x4xm1 (address, stride, gvl);
}


uint16x4xm2_t test_vlsseg4ev_uint16x4xm2 (const unsigned short *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint16x4xm2 (address, stride, gvl);
}


uint32x4xm1_t test_vlsseg4ev_uint32x4xm1 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint32x4xm1 (address, stride, gvl);
}


uint32x4xm2_t test_vlsseg4ev_uint32x4xm2 (const unsigned int *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint32x4xm2 (address, stride, gvl);
}


uint64x4xm1_t test_vlsseg4ev_uint64x4xm1 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint64x4xm1 (address, stride, gvl);
}


uint64x4xm2_t test_vlsseg4ev_uint64x4xm2 (const unsigned long *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint64x4xm2 (address, stride, gvl);
}


uint8x4xm1_t test_vlsseg4ev_uint8x4xm1 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint8x4xm1 (address, stride, gvl);
}


uint8x4xm2_t test_vlsseg4ev_uint8x4xm2 (const unsigned char *address, long stride, unsigned int gvl) {
    return vlsseg4ev_uint8x4xm2 (address, stride, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvlsseg4e\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvlsseg4e\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

