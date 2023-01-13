// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfmsub_vv_f16mf4(vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4(vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2(vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2(vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1(vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1(vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2(vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2(vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4(vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4(vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8(vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8(vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsub_vv_f32mf2(vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsub_vf_f32mf2(vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsub_vv_f32m1(vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsub_vf_f32m1(vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsub_vv_f32m2(vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsub_vf_f32m2(vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsub_vv_f32m4(vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsub_vf_f32m4(vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsub_vv_f32m8(vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsub_vf_f32m8(vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmsub_vv_f64m1(vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmsub_vf_f64m1(vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmsub_vv_f64m2(vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmsub_vf_f64m2(vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmsub_vv_f64m4(vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmsub_vf_f64m4(vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmsub_vv_f64m8(vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmsub(vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmsub_vf_f64m8(vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmsub(vd, rs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vv_f16mf4_m(vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16mf4_t test_vfmsub_vf_f16mf4_m(vbool64_t mask, vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vv_f16mf2_m(vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16mf2_t test_vfmsub_vf_f16mf2_m(vbool32_t mask, vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vv_f16m1_m(vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16m1_t test_vfmsub_vf_f16m1_m(vbool16_t mask, vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vv_f16m2_m(vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16m2_t test_vfmsub_vf_f16m2_m(vbool8_t mask, vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vv_f16m4_m(vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16m4_t test_vfmsub_vf_f16m4_m(vbool4_t mask, vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vv_f16m8_m(vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat16m8_t test_vfmsub_vf_f16m8_m(vbool2_t mask, vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat32mf2_t test_vfmsub_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, vfloat32mf2_t vs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat32mf2_t test_vfmsub_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t vd, float rs1, vfloat32mf2_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat32m1_t test_vfmsub_vv_f32m1_m(vbool32_t mask, vfloat32m1_t vd, vfloat32m1_t vs1, vfloat32m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat32m1_t test_vfmsub_vf_f32m1_m(vbool32_t mask, vfloat32m1_t vd, float rs1, vfloat32m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat32m2_t test_vfmsub_vv_f32m2_m(vbool16_t mask, vfloat32m2_t vd, vfloat32m2_t vs1, vfloat32m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat32m2_t test_vfmsub_vf_f32m2_m(vbool16_t mask, vfloat32m2_t vd, float rs1, vfloat32m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat32m4_t test_vfmsub_vv_f32m4_m(vbool8_t mask, vfloat32m4_t vd, vfloat32m4_t vs1, vfloat32m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat32m4_t test_vfmsub_vf_f32m4_m(vbool8_t mask, vfloat32m4_t vd, float rs1, vfloat32m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat32m8_t test_vfmsub_vv_f32m8_m(vbool4_t mask, vfloat32m8_t vd, vfloat32m8_t vs1, vfloat32m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat32m8_t test_vfmsub_vf_f32m8_m(vbool4_t mask, vfloat32m8_t vd, float rs1, vfloat32m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat64m1_t test_vfmsub_vv_f64m1_m(vbool64_t mask, vfloat64m1_t vd, vfloat64m1_t vs1, vfloat64m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat64m1_t test_vfmsub_vf_f64m1_m(vbool64_t mask, vfloat64m1_t vd, double rs1, vfloat64m1_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat64m2_t test_vfmsub_vv_f64m2_m(vbool32_t mask, vfloat64m2_t vd, vfloat64m2_t vs1, vfloat64m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat64m2_t test_vfmsub_vf_f64m2_m(vbool32_t mask, vfloat64m2_t vd, double rs1, vfloat64m2_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat64m4_t test_vfmsub_vv_f64m4_m(vbool16_t mask, vfloat64m4_t vd, vfloat64m4_t vs1, vfloat64m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat64m4_t test_vfmsub_vf_f64m4_m(vbool16_t mask, vfloat64m4_t vd, double rs1, vfloat64m4_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}

vfloat64m8_t test_vfmsub_vv_f64m8_m(vbool8_t mask, vfloat64m8_t vd, vfloat64m8_t vs1, vfloat64m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, vs1, vs2, vl);
}

vfloat64m8_t test_vfmsub_vf_f64m8_m(vbool8_t mask, vfloat64m8_t vd, double rs1, vfloat64m8_t vs2, size_t vl) {
  return vfmsub(mask, vd, rs1, vs2, vl);
}
