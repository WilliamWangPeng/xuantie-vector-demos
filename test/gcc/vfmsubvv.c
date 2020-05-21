
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=*f*d*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vfmsubvv_float32xm1 (float32xm1_t a, float32xm1_t b, float32xm1_t c, unsigned int gvl) {
    return vfmsubvv_float32xm1 (a, b, c, gvl);
}


float32xm2_t test_vfmsubvv_float32xm2 (float32xm2_t a, float32xm2_t b, float32xm2_t c, unsigned int gvl) {
    return vfmsubvv_float32xm2 (a, b, c, gvl);
}


float32xm4_t test_vfmsubvv_float32xm4 (float32xm4_t a, float32xm4_t b, float32xm4_t c, unsigned int gvl) {
    return vfmsubvv_float32xm4 (a, b, c, gvl);
}


float32xm8_t test_vfmsubvv_float32xm8 (float32xm8_t a, float32xm8_t b, float32xm8_t c, unsigned int gvl) {
    return vfmsubvv_float32xm8 (a, b, c, gvl);
}


float64xm1_t test_vfmsubvv_float64xm1 (float64xm1_t a, float64xm1_t b, float64xm1_t c, unsigned int gvl) {
    return vfmsubvv_float64xm1 (a, b, c, gvl);
}


float64xm2_t test_vfmsubvv_float64xm2 (float64xm2_t a, float64xm2_t b, float64xm2_t c, unsigned int gvl) {
    return vfmsubvv_float64xm2 (a, b, c, gvl);
}


float64xm4_t test_vfmsubvv_float64xm4 (float64xm4_t a, float64xm4_t b, float64xm4_t c, unsigned int gvl) {
    return vfmsubvv_float64xm4 (a, b, c, gvl);
}


float64xm8_t test_vfmsubvv_float64xm8 (float64xm8_t a, float64xm8_t b, float64xm8_t c, unsigned int gvl) {
    return vfmsubvv_float64xm8 (a, b, c, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvfmsub\.vv" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvfmsub\.vv" } }*/

/* { dg-final { cleanup-saved-temps } } */

