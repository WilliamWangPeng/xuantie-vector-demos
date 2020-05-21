
/* { dg-do assemble } */
/* { dg-skip-if "test vector insns" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-vector.h>

float32xm1_t test_vmvvv_float32xm1 (float32xm1_t a, unsigned int gvl) {
    return vmvvv_float32xm1 (a, gvl);
}


float32xm2_t test_vmvvv_float32xm2 (float32xm2_t a, unsigned int gvl) {
    return vmvvv_float32xm2 (a, gvl);
}


float32xm4_t test_vmvvv_float32xm4 (float32xm4_t a, unsigned int gvl) {
    return vmvvv_float32xm4 (a, gvl);
}


float32xm8_t test_vmvvv_float32xm8 (float32xm8_t a, unsigned int gvl) {
    return vmvvv_float32xm8 (a, gvl);
}


float64xm1_t test_vmvvv_float64xm1 (float64xm1_t a, unsigned int gvl) {
    return vmvvv_float64xm1 (a, gvl);
}


float64xm2_t test_vmvvv_float64xm2 (float64xm2_t a, unsigned int gvl) {
    return vmvvv_float64xm2 (a, gvl);
}


float64xm4_t test_vmvvv_float64xm4 (float64xm4_t a, unsigned int gvl) {
    return vmvvv_float64xm4 (a, gvl);
}


float64xm8_t test_vmvvv_float64xm8 (float64xm8_t a, unsigned int gvl) {
    return vmvvv_float64xm8 (a, gvl);
}


int16xm1_t test_vmvvv_int16xm1 (int16xm1_t a, unsigned int gvl) {
    return vmvvv_int16xm1 (a, gvl);
}


int16xm2_t test_vmvvv_int16xm2 (int16xm2_t a, unsigned int gvl) {
    return vmvvv_int16xm2 (a, gvl);
}


int16xm4_t test_vmvvv_int16xm4 (int16xm4_t a, unsigned int gvl) {
    return vmvvv_int16xm4 (a, gvl);
}


int16xm8_t test_vmvvv_int16xm8 (int16xm8_t a, unsigned int gvl) {
    return vmvvv_int16xm8 (a, gvl);
}


int32xm1_t test_vmvvv_int32xm1 (int32xm1_t a, unsigned int gvl) {
    return vmvvv_int32xm1 (a, gvl);
}


int32xm2_t test_vmvvv_int32xm2 (int32xm2_t a, unsigned int gvl) {
    return vmvvv_int32xm2 (a, gvl);
}


int32xm4_t test_vmvvv_int32xm4 (int32xm4_t a, unsigned int gvl) {
    return vmvvv_int32xm4 (a, gvl);
}


int32xm8_t test_vmvvv_int32xm8 (int32xm8_t a, unsigned int gvl) {
    return vmvvv_int32xm8 (a, gvl);
}


int64xm1_t test_vmvvv_int64xm1 (int64xm1_t a, unsigned int gvl) {
    return vmvvv_int64xm1 (a, gvl);
}


int64xm2_t test_vmvvv_int64xm2 (int64xm2_t a, unsigned int gvl) {
    return vmvvv_int64xm2 (a, gvl);
}


int64xm4_t test_vmvvv_int64xm4 (int64xm4_t a, unsigned int gvl) {
    return vmvvv_int64xm4 (a, gvl);
}


int64xm8_t test_vmvvv_int64xm8 (int64xm8_t a, unsigned int gvl) {
    return vmvvv_int64xm8 (a, gvl);
}


int8xm1_t test_vmvvv_int8xm1 (int8xm1_t a, unsigned int gvl) {
    return vmvvv_int8xm1 (a, gvl);
}


int8xm2_t test_vmvvv_int8xm2 (int8xm2_t a, unsigned int gvl) {
    return vmvvv_int8xm2 (a, gvl);
}


int8xm4_t test_vmvvv_int8xm4 (int8xm4_t a, unsigned int gvl) {
    return vmvvv_int8xm4 (a, gvl);
}


int8xm8_t test_vmvvv_int8xm8 (int8xm8_t a, unsigned int gvl) {
    return vmvvv_int8xm8 (a, gvl);
}


uint16xm1_t test_vmvvv_uint16xm1 (uint16xm1_t a, unsigned int gvl) {
    return vmvvv_uint16xm1 (a, gvl);
}


uint16xm2_t test_vmvvv_uint16xm2 (uint16xm2_t a, unsigned int gvl) {
    return vmvvv_uint16xm2 (a, gvl);
}


uint16xm4_t test_vmvvv_uint16xm4 (uint16xm4_t a, unsigned int gvl) {
    return vmvvv_uint16xm4 (a, gvl);
}


uint16xm8_t test_vmvvv_uint16xm8 (uint16xm8_t a, unsigned int gvl) {
    return vmvvv_uint16xm8 (a, gvl);
}


uint32xm1_t test_vmvvv_uint32xm1 (uint32xm1_t a, unsigned int gvl) {
    return vmvvv_uint32xm1 (a, gvl);
}


uint32xm2_t test_vmvvv_uint32xm2 (uint32xm2_t a, unsigned int gvl) {
    return vmvvv_uint32xm2 (a, gvl);
}


uint32xm4_t test_vmvvv_uint32xm4 (uint32xm4_t a, unsigned int gvl) {
    return vmvvv_uint32xm4 (a, gvl);
}


uint32xm8_t test_vmvvv_uint32xm8 (uint32xm8_t a, unsigned int gvl) {
    return vmvvv_uint32xm8 (a, gvl);
}


uint64xm1_t test_vmvvv_uint64xm1 (uint64xm1_t a, unsigned int gvl) {
    return vmvvv_uint64xm1 (a, gvl);
}


uint64xm2_t test_vmvvv_uint64xm2 (uint64xm2_t a, unsigned int gvl) {
    return vmvvv_uint64xm2 (a, gvl);
}


uint64xm4_t test_vmvvv_uint64xm4 (uint64xm4_t a, unsigned int gvl) {
    return vmvvv_uint64xm4 (a, gvl);
}


uint64xm8_t test_vmvvv_uint64xm8 (uint64xm8_t a, unsigned int gvl) {
    return vmvvv_uint64xm8 (a, gvl);
}


uint8xm1_t test_vmvvv_uint8xm1 (uint8xm1_t a, unsigned int gvl) {
    return vmvvv_uint8xm1 (a, gvl);
}


uint8xm2_t test_vmvvv_uint8xm2 (uint8xm2_t a, unsigned int gvl) {
    return vmvvv_uint8xm2 (a, gvl);
}


uint8xm4_t test_vmvvv_uint8xm4 (uint8xm4_t a, unsigned int gvl) {
    return vmvvv_uint8xm4 (a, gvl);
}


uint8xm8_t test_vmvvv_uint8xm8 (uint8xm8_t a, unsigned int gvl) {
    return vmvvv_uint8xm8 (a, gvl);
}

/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e16,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e32,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e64,m8\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m1\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m2\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m4\n\tvmv\.v\.v" } }*/
/* { dg-final { scan-assembler "vsetvli\t\[a-z\]+\[0-9\]+,\[a-z\]+\[0-9\]+,e8,m8\n\tvmv\.v\.v" } }*/

/* { dg-final { cleanup-saved-temps } } */

