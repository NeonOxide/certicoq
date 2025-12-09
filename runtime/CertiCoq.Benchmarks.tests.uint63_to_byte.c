#ifndef CERTICOQ_BENCHMARKS_TESTS_UINT63_TO_BYTE_C
#define CERTICOQ_BENCHMARKS_TESTS_UINT63_TO_BYTE_C
#include <gc_stack.h>
#include <prim_int63.h>
#include <prim_string.h>
#include <prim_floats.h>
#include <prim_int63.h>
#include <coq_c_ffi.h>
#include "CertiCoq.Benchmarks.tests.uint63_to_byte.h"
extern struct thread_info *make_tinfo(void);
extern value generate_uint_to_byte_fun(struct thread_info *);
value CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_143(struct thread_info *, value, value);
value pos_sub_uncurried_known_142(struct thread_info *, value, value);
value add_carry_uncurried_known_141(struct thread_info *, value, value);
value add_uncurried_known_140(struct thread_info *, value, value);
value f_case_known_139(struct thread_info *, value);
value y_wrapper_138(struct thread_info *, value, value);
value y_wrapper_137(struct thread_info *, value, value);
value y_wrapper_136(struct thread_info *, value, value);
value y_known_135(struct thread_info *, value, value);
value y_wrapper_134(struct thread_info *, value, value);
value y_wrapper_133(struct thread_info *, value, value);
value y_wrapper_132(struct thread_info *, value, value);
value y_known_131(struct thread_info *, value, value);
value f_case_known_130(struct thread_info *, value);
static value y_wrapper_129(struct thread_info *, value, value);
value y_known_128(struct thread_info *, value);
value f_case_127(struct thread_info *, value, value);
value f_case_known_126(struct thread_info *, value);
value to_Z_rec_uncurried_known_125(struct thread_info *, value, value);
value succ_known_124(struct thread_info *, value);
static value y_wrapper_123(struct thread_info *, value, value);
value y_wrapper_122(struct thread_info *, value, value);
value y_wrapper_121(struct thread_info *, value, value);
value y_known_120(struct thread_info *, value, value);
value y_wrapper_119(struct thread_info *, value, value);
static value y_wrapper_118(struct thread_info *, value, value);
static value y_wrapper_117(struct thread_info *, value, value);
value y_known_116(struct thread_info *, value, value);
value F_known_115(struct thread_info *, value);
static value y_wrapper_114(struct thread_info *, value, value);
value y_known_113(struct thread_info *, value);
value CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112(struct thread_info *, value, value, value);
value P_mod_two_p_uncurried_known_111(struct thread_info *, value, value);
value CoqdZArithdBinIntDefdZddouble_wrapper_110(struct thread_info *, value, value);
value CoqdZArithdBinIntDefdZddouble_known_109(struct thread_info *, value);
value CoqdZArithdBinIntDefdZdsucc_double_wrapper_108(struct thread_info *, value, value);
value CoqdZArithdBinIntDefdZdsucc_double_known_107(struct thread_info *, value);
value pred_double_known_106(struct thread_info *, value);
value F_known_105(struct thread_info *, value, value);
value body(struct thread_info *);
unsigned long long const body_info_679[2] = { 16LL, 0LL, };

unsigned long long const F_known_info_678[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const pred_double_known_info_677[3] = { 4LL, 1LL, 0LL, };

unsigned long long const CoqdZArithdBinIntDefdZdsucc_double_known_info_676[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdZArithdBinIntDefdZdsucc_double_wrapper_info_675[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const CoqdZArithdBinIntDefdZddouble_known_info_674[3] = {
  4LL, 1LL, 0LL, };

unsigned long long const CoqdZArithdBinIntDefdZddouble_wrapper_info_673[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const P_mod_two_p_uncurried_known_info_672[4] = { 2LL,
  2LL, 0LL, 1LL, };

unsigned long long const CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_info_671[5] = {
  0LL, 3LL, 0LL, 1LL, 2LL, };

unsigned long long const y_known_info_670[3] = { 2LL, 1LL, 0LL, };

unsigned long long const y_wrapper_info_669[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const F_known_info_668[3] = { 3LL, 1LL, 0LL, };

unsigned long long const y_known_info_667[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_666[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_665[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_664[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_known_info_663[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_662[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_661[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_660[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const succ_known_info_659[3] = { 2LL, 1LL, 0LL, };

unsigned long long const to_Z_rec_uncurried_known_info_658[4] = { 0LL, 2LL,
  0LL, 1LL, };

unsigned long long const f_case_known_info_657[3] = { 3LL, 1LL, 0LL, };

unsigned long long const f_case_info_656[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_known_info_655[3] = { 2LL, 1LL, 0LL, };

unsigned long long const y_wrapper_info_654[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_653[3] = { 5LL, 1LL, 0LL, };

unsigned long long const y_known_info_652[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_651[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_650[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_649[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const y_known_info_648[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_647[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_646[4] = { 2LL, 2LL, 0LL, 1LL, };

unsigned long long const y_wrapper_info_645[4] = { 0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_644[3] = { 2LL, 1LL, 0LL, };

unsigned long long const add_uncurried_known_info_643[4] = { 2LL, 2LL, 0LL,
  1LL, };

unsigned long long const add_carry_uncurried_known_info_642[4] = { 2LL, 2LL,
  0LL, 1LL, };

unsigned long long const pos_sub_uncurried_known_info_641[4] = { 4LL, 2LL,
  0LL, 1LL, };

unsigned long long const CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_info_640[4] = {
  0LL, 2LL, 0LL, 1LL, };

value CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_143(struct thread_info *$tinfo, value $env_549, value $n_550)
{
  struct stack_frame frame;
  value root[4];
  register value $compcertdlibdIntegersdWordsize_8dwordsize_proj_551;
  register value $y_proj_552;
  register value $y_proj_553;
  register value $CoqdNumbersdCyclicdInt63dUint63dsize_proj_554;
  register value $y_556;
  register value $env_557;
  register value $y_558;
  register value $y_559;
  register value $y_560;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $compcertdlibdIntegersdWordsize_8dwordsize_proj_551 =
    *((value *) $env_549 + 0LL);
  $y_proj_552 = *((value *) $env_549 + 1LL);
  $y_proj_553 = *((value *) $env_549 + 2LL);
  $CoqdNumbersdCyclicdInt63dUint63dsize_proj_554 =
    *((value *) $env_549 + 3LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 2LL) = $y_proj_553;
  *(root + 1LL) = $y_proj_552;
  *(root + 0LL) = $compcertdlibdIntegersdWordsize_8dwordsize_proj_551;
  frame.next = root + 3LL;
  (*$tinfo).fp = &frame;
  $y_556 =
    ((value (*)(struct thread_info *, value, value)) to_Z_rec_uncurried_known_125)
    ($tinfo, $n_550, $CoqdNumbersdCyclicdInt63dUint63dsize_proj_554);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 3LL) = $y_556;
    frame.next = root + 4LL;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $y_556 = *(root + 3LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_proj_553 = *(root + 2LL);
  $y_proj_552 = *(root + 1LL);
  $compcertdlibdIntegersdWordsize_8dwordsize_proj_551 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $env_557 = (value) ($alloc + 1LL);
  $alloc = $alloc + 4LL;
  *((value *) $env_557 + -1LL) = 3072LL;
  *((value *) $env_557 + 0LL) = $y_proj_553;
  *((value *) $env_557 + 1LL) = $y_proj_552;
  *((value *) $env_557 + 2LL) =
    $compcertdlibdIntegersdWordsize_8dwordsize_proj_551;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  /*skip*/;
  $y_558 =
    ((value (*)(struct thread_info *, value, value)) f_case_127)
    ($tinfo, $env_557, $y_556);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(3LL <= $limit - $alloc)) {
    *(root + 0LL) = $y_558;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LL;
    garbage_collect($tinfo);
    $y_558 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  /*skip*/;
  $y_559 = 1LL;
  $y_560 = (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $y_560 + -1LL) = 2048LL;
  *((value *) $y_560 + 0LL) = $y_558;
  *((value *) $y_560 + 1LL) = $y_559;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_560;
}

value pos_sub_uncurried_known_142(struct thread_info *$tinfo, value $y_512, value $x_513)
{
  struct stack_frame frame;
  value root[2];
  register value $p_514;
  register value $q_515;
  register value $y_516;
  register value $q_518;
  register value $y_519;
  register value $y_521;
  register value $y_522;
  register value $p_523;
  register value $q_524;
  register value $y_525;
  register value $y_526;
  register value $y_527;
  register value $p_528;
  register value $y_530;
  register value $y_531;
  register value $p_532;
  register value $y_533;
  register value $y_534;
  register value $q_535;
  register value $y_536;
  register value $y_539;
  register value $y_540;
  register value $q_541;
  register value $y_542;
  register value $y_543;
  register value $q_544;
  register value $y_546;
  register value $y_547;
  register value $y_548;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_513;
    *(root + 0LL) = $y_512;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_513 = *(root + 1LL);
    $y_512 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_513 & 1) == 0) {
    switch (*((value *) $x_513 + -1LL) & 255LL) {
      case 0:
        $p_514 = *((value *) $x_513 + 0LL);
        if (($y_512 & 1) == 0) {
          switch (*((value *) $y_512 + -1LL) & 255LL) {
            case 0:
              $q_515 = *((value *) $y_512 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_516 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_142)
                ($tinfo, $q_515, $p_514);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_109)
                ($tinfo, $y_516);
              return $result;
              break;
            default:
              $q_518 = *((value *) $y_512 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_519 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_142)
                ($tinfo, $q_518, $p_514);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdsucc_double_known_107)
                ($tinfo, $y_519);
              return $result;
              break;
            
          }
        } else {
          switch ($y_512 >> 1LL) {
            default:
              $y_521 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_521 + -1LL) = 1025LL;
              *((value *) $y_521 + 0LL) = $p_514;
              $y_522 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_522 + -1LL) = 1024LL;
              *((value *) $y_522 + 0LL) = $y_521;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_522;
              break;
            
          }
        }
        break;
      default:
        $p_523 = *((value *) $x_513 + 0LL);
        if (($y_512 & 1) == 0) {
          switch (*((value *) $y_512 + -1LL) & 255LL) {
            case 0:
              $q_524 = *((value *) $y_512 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_525 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_142)
                ($tinfo, $q_524, $p_523);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(4LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_525;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 4LL;
                garbage_collect($tinfo);
                $y_525 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              if (($y_525 & 1) == 0) {
                switch (*((value *) $y_525 + -1LL) & 255LL) {
                  case 0:
                    $p_528 = *((value *) $y_525 + 0LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $y_530 =
                      ((value (*)(struct thread_info *, value)) pred_double_known_106)
                      ($tinfo, $p_528);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 0LL) = $y_530;
                      frame.next = root + 1LL;
                      (*$tinfo).fp = &frame;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_530 = *(root + 0LL);
                      (*$tinfo).fp = frame.prev;
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    /*skip*/;
                    $y_531 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_531 + -1LL) = 1024LL;
                    *((value *) $y_531 + 0LL) = $y_530;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_531;
                    break;
                  default:
                    $p_532 = *((value *) $y_525 + 0LL);
                    $y_533 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_533 + -1LL) = 1024LL;
                    *((value *) $y_533 + 0LL) = $p_532;
                    $y_534 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_534 + -1LL) = 1025LL;
                    *((value *) $y_534 + 0LL) = $y_533;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_534;
                    break;
                  
                }
              } else {
                switch ($y_525 >> 1LL) {
                  default:
                    $y_526 = 1LL;
                    $y_527 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_527 + -1LL) = 1025LL;
                    *((value *) $y_527 + 0LL) = $y_526;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_527;
                    break;
                  
                }
              }
              break;
            default:
              $q_535 = *((value *) $y_512 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_536 =
                ((value (*)(struct thread_info *, value, value)) pos_sub_uncurried_known_142)
                ($tinfo, $q_535, $p_523);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_109)
                ($tinfo, $y_536);
              return $result;
              break;
            
          }
        } else {
          switch ($y_512 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_539 =
                ((value (*)(struct thread_info *, value)) pred_double_known_106)
                ($tinfo, $p_523);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_539;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_539 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_540 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_540 + -1LL) = 1024LL;
              *((value *) $y_540 + 0LL) = $y_539;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_540;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($x_513 >> 1LL) {
      default:
        if (($y_512 & 1) == 0) {
          switch (*((value *) $y_512 + -1LL) & 255LL) {
            case 0:
              $q_541 = *((value *) $y_512 + 0LL);
              $y_542 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_542 + -1LL) = 1025LL;
              *((value *) $y_542 + 0LL) = $q_541;
              $y_543 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_543 + -1LL) = 1025LL;
              *((value *) $y_543 + 0LL) = $y_542;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_543;
              break;
            default:
              $q_544 = *((value *) $y_512 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_546 =
                ((value (*)(struct thread_info *, value)) pred_double_known_106)
                ($tinfo, $q_544);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_546;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_546 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_547 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_547 + -1LL) = 1025LL;
              *((value *) $y_547 + 0LL) = $y_546;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_547;
              break;
            
          }
        } else {
          switch ($y_512 >> 1LL) {
            default:
              $y_548 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_548;
              break;
            
          }
        }
        break;
      
    }
  }
}

value add_carry_uncurried_known_141(struct thread_info *$tinfo, value $y_479, value $x_480)
{
  struct stack_frame frame;
  value root[2];
  register value $p_481;
  register value $q_482;
  register value $y_483;
  register value $y_484;
  register value $q_485;
  register value $y_486;
  register value $y_487;
  register value $y_489;
  register value $y_490;
  register value $p_491;
  register value $q_492;
  register value $y_493;
  register value $y_494;
  register value $q_495;
  register value $y_496;
  register value $y_497;
  register value $y_499;
  register value $y_500;
  register value $q_501;
  register value $y_503;
  register value $y_504;
  register value $q_505;
  register value $y_507;
  register value $y_508;
  register value $y_509;
  register value $y_510;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_480;
    *(root + 0LL) = $y_479;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_480 = *(root + 1LL);
    $y_479 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_480 & 1) == 0) {
    switch (*((value *) $x_480 + -1LL) & 255LL) {
      case 0:
        $p_481 = *((value *) $x_480 + 0LL);
        if (($y_479 & 1) == 0) {
          switch (*((value *) $y_479 + -1LL) & 255LL) {
            case 0:
              $q_482 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_483 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_141)
                ($tinfo, $q_482, $p_481);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_483;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_483 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_484 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_484 + -1LL) = 1024LL;
              *((value *) $y_484 + 0LL) = $y_483;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_484;
              break;
            default:
              $q_485 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_486 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_141)
                ($tinfo, $q_485, $p_481);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_486;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_486 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_487 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_487 + -1LL) = 1025LL;
              *((value *) $y_487 + 0LL) = $y_486;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_487;
              break;
            
          }
        } else {
          switch ($y_479 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_489 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_481);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_489;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_489 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_490 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_490 + -1LL) = 1024LL;
              *((value *) $y_490 + 0LL) = $y_489;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_490;
              break;
            
          }
        }
        break;
      default:
        $p_491 = *((value *) $x_480 + 0LL);
        if (($y_479 & 1) == 0) {
          switch (*((value *) $y_479 + -1LL) & 255LL) {
            case 0:
              $q_492 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_493 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_141)
                ($tinfo, $q_492, $p_491);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_493;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_493 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_494 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_494 + -1LL) = 1025LL;
              *((value *) $y_494 + 0LL) = $y_493;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_494;
              break;
            default:
              $q_495 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_496 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_140)
                ($tinfo, $q_495, $p_491);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_496;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_496 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_497 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_497 + -1LL) = 1024LL;
              *((value *) $y_497 + 0LL) = $y_496;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_497;
              break;
            
          }
        } else {
          switch ($y_479 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_499 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_491);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_499;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_499 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_500 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_500 + -1LL) = 1025LL;
              *((value *) $y_500 + 0LL) = $y_499;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_500;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($x_480 >> 1LL) {
      default:
        if (($y_479 & 1) == 0) {
          switch (*((value *) $y_479 + -1LL) & 255LL) {
            case 0:
              $q_501 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_503 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_501);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_503;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_503 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_504 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_504 + -1LL) = 1024LL;
              *((value *) $y_504 + 0LL) = $y_503;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_504;
              break;
            default:
              $q_505 = *((value *) $y_479 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_507 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_505);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_507;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_507 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_508 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_508 + -1LL) = 1025LL;
              *((value *) $y_508 + 0LL) = $y_507;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_508;
              break;
            
          }
        } else {
          switch ($y_479 >> 1LL) {
            default:
              $y_509 = 1LL;
              $y_510 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_510 + -1LL) = 1024LL;
              *((value *) $y_510 + 0LL) = $y_509;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_510;
              break;
            
          }
        }
        break;
      
    }
  }
}

value add_uncurried_known_140(struct thread_info *$tinfo, value $y_450, value $x_451)
{
  struct stack_frame frame;
  value root[2];
  register value $p_452;
  register value $q_453;
  register value $y_454;
  register value $y_455;
  register value $q_456;
  register value $y_457;
  register value $y_458;
  register value $y_460;
  register value $y_461;
  register value $p_462;
  register value $q_463;
  register value $y_464;
  register value $y_465;
  register value $q_466;
  register value $y_467;
  register value $y_468;
  register value $y_469;
  register value $q_470;
  register value $y_472;
  register value $y_473;
  register value $q_474;
  register value $y_475;
  register value $y_476;
  register value $y_477;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $x_451;
    *(root + 0LL) = $y_450;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_451 = *(root + 1LL);
    $y_450 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_451 & 1) == 0) {
    switch (*((value *) $x_451 + -1LL) & 255LL) {
      case 0:
        $p_452 = *((value *) $x_451 + 0LL);
        if (($y_450 & 1) == 0) {
          switch (*((value *) $y_450 + -1LL) & 255LL) {
            case 0:
              $q_453 = *((value *) $y_450 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_454 =
                ((value (*)(struct thread_info *, value, value)) add_carry_uncurried_known_141)
                ($tinfo, $q_453, $p_452);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_454;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_454 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_455 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_455 + -1LL) = 1025LL;
              *((value *) $y_455 + 0LL) = $y_454;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_455;
              break;
            default:
              $q_456 = *((value *) $y_450 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_457 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_140)
                ($tinfo, $q_456, $p_452);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_457;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_457 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_458 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_458 + -1LL) = 1024LL;
              *((value *) $y_458 + 0LL) = $y_457;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_458;
              break;
            
          }
        } else {
          switch ($y_450 >> 1LL) {
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_460 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $p_452);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_460;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_460 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_461 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_461 + -1LL) = 1025LL;
              *((value *) $y_461 + 0LL) = $y_460;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_461;
              break;
            
          }
        }
        break;
      default:
        $p_462 = *((value *) $x_451 + 0LL);
        if (($y_450 & 1) == 0) {
          switch (*((value *) $y_450 + -1LL) & 255LL) {
            case 0:
              $q_463 = *((value *) $y_450 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_464 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_140)
                ($tinfo, $q_463, $p_462);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_464;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_464 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_465 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_465 + -1LL) = 1024LL;
              *((value *) $y_465 + 0LL) = $y_464;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_465;
              break;
            default:
              $q_466 = *((value *) $y_450 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_467 =
                ((value (*)(struct thread_info *, value, value)) add_uncurried_known_140)
                ($tinfo, $q_466, $p_462);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_467;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_467 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_468 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_468 + -1LL) = 1025LL;
              *((value *) $y_468 + 0LL) = $y_467;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_468;
              break;
            
          }
        } else {
          switch ($y_450 >> 1LL) {
            default:
              $y_469 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_469 + -1LL) = 1024LL;
              *((value *) $y_469 + 0LL) = $p_462;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_469;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($x_451 >> 1LL) {
      default:
        if (($y_450 & 1) == 0) {
          switch (*((value *) $y_450 + -1LL) & 255LL) {
            case 0:
              $q_470 = *((value *) $y_450 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_472 =
                ((value (*)(struct thread_info *, value)) succ_known_124)
                ($tinfo, $q_470);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              if (!(2LL <= $limit - $alloc)) {
                *(root + 0LL) = $y_472;
                frame.next = root + 1LL;
                (*$tinfo).fp = &frame;
                (*$tinfo).nalloc = 2LL;
                garbage_collect($tinfo);
                $y_472 = *(root + 0LL);
                (*$tinfo).fp = frame.prev;
                $alloc = (*$tinfo).alloc;
                $limit = (*$tinfo).limit;
              }
              /*skip*/;
              $y_473 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_473 + -1LL) = 1025LL;
              *((value *) $y_473 + 0LL) = $y_472;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_473;
              break;
            default:
              $q_474 = *((value *) $y_450 + 0LL);
              $y_475 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_475 + -1LL) = 1024LL;
              *((value *) $y_475 + 0LL) = $q_474;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_475;
              break;
            
          }
        } else {
          switch ($y_450 >> 1LL) {
            default:
              $y_476 = 1LL;
              $y_477 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_477 + -1LL) = 1025LL;
              *((value *) $y_477 + 0LL) = $y_476;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_477;
              break;
            
          }
        }
        break;
      
    }
  }
}

value f_case_known_139(struct thread_info *$tinfo, value $s_443)
{
  struct stack_frame frame;
  value root[1];
  register value $y_444;
  register value $x_445;
  register value $y_446;
  register value $x_447;
  register value $y_448;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $s_443;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $s_443 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_443 & 1) == 0) {
    switch (*((value *) $s_443 + -1LL) & 255LL) {
      case 0:
        $x_445 = *((value *) $s_443 + 0LL);
        $y_446 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_446 + -1LL) = 1025LL;
        *((value *) $y_446 + 0LL) = $x_445;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_446;
        break;
      default:
        $x_447 = *((value *) $s_443 + 0LL);
        $y_448 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_448 + -1LL) = 1024LL;
        *((value *) $y_448 + 0LL) = $x_447;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_448;
        break;
      
    }
  } else {
    switch ($s_443 >> 1LL) {
      default:
        $y_444 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_444;
        break;
      
    }
  }
}

value y_wrapper_138(struct thread_info *$tinfo, value $env_438, value $x0_439)
{
  struct stack_frame frame;
  value root[2];
  register value $p_proj_441;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $p_proj_441 = *((value *) $env_438 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value)) y_known_135)
    ($tinfo, $x0_439, $p_proj_441);
  return $result;
}

value y_wrapper_137(struct thread_info *$tinfo, value $env_434, value $diseq_435)
{
  struct stack_frame frame;
  value root[0];
  register value $y_436;
  register value $y_437;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_436 = 1LL;
  $y_437 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_437 + -1LL) = 1025LL;
  *((value *) $y_437 + 0LL) = $y_436;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_437;
}

value y_wrapper_136(struct thread_info *$tinfo, value $env_430, value $a_431)
{
  struct stack_frame frame;
  value root[0];
  register value $y_432;
  register value $y_433;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_432 = 1LL;
  $y_433 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_433 + -1LL) = 1024LL;
  *((value *) $y_433 + 0LL) = $y_432;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_433;
}

value y_known_135(struct thread_info *$tinfo, value $x0_410, value $p_411)
{
  struct stack_frame frame;
  value root[3];
  register value $y_412;
  register value $y_413;
  register value $y_414;
  register value $y_415;
  register value $p_416;
  register value $env_420;
  register value $env_421;
  register value $y_423;
  register value $y_code_424;
  register value $y_env_425;
  register value $y_426;
  register value $y_wrapper_clo_428;
  register value $y_wrapper_clo_429;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $p_411;
    *(root + 0LL) = $x0_410;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $p_411 = *(root + 1LL);
    $x0_410 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_410 & 1) == 0) {
    switch (*((value *) $x0_410 + -1LL) & 255LL) {
      case 0:
        $y_414 = 1LL;
        $y_415 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_415 + -1LL) = 1025LL;
        *((value *) $y_415 + 0LL) = $y_414;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_415;
        break;
      default:
        $p_416 = *((value *) $x0_410 + 0LL);
        $env_420 = 1LL;
        $env_421 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $env_421;
        *(root + 1LL) = $env_420;
        *(root + 0LL) = $p_416;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_423 =
          ((value (*)(struct thread_info *, value)) F_known_115)
          ($tinfo, $p_411);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $env_421 = *(root + 2LL);
        $env_420 = *(root + 1LL);
        $p_416 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_424 = *((value *) $y_423 + 0LL);
        $y_env_425 = *((value *) $y_423 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $env_421;
        *(root + 0LL) = $env_420;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_426 =
          ((value (*)(struct thread_info *, value, value)) $y_code_424)
          ($tinfo, $y_env_425, $p_416);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_426;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_426 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $env_421 = *(root + 1LL);
        $env_420 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_wrapper_clo_428 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_428 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_428 + 0LL) = y_wrapper_137;
        *((value *) $y_wrapper_clo_428 + 1LL) = $env_421;
        $y_wrapper_clo_429 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_429 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_429 + 0LL) = y_wrapper_136;
        *((value *) $y_wrapper_clo_429 + 1LL) = $env_420;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value, value)) CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112)
          ($tinfo, $y_426, $y_wrapper_clo_428, $y_wrapper_clo_429);
        return $result;
        break;
      
    }
  } else {
    switch ($x0_410 >> 1LL) {
      default:
        $y_412 = 1LL;
        $y_413 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_413 + -1LL) = 1025LL;
        *((value *) $y_413 + 0LL) = $y_412;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_413;
        break;
      
    }
  }
}

value y_wrapper_134(struct thread_info *$tinfo, value $env_405, value $x0_406)
{
  struct stack_frame frame;
  value root[2];
  register value $p_proj_408;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $p_proj_408 = *((value *) $env_405 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value)) y_known_131)
    ($tinfo, $x0_406, $p_proj_408);
  return $result;
}

value y_wrapper_133(struct thread_info *$tinfo, value $env_401, value $diseq_402)
{
  struct stack_frame frame;
  value root[0];
  register value $y_403;
  register value $y_404;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_403 = 1LL;
  $y_404 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_404 + -1LL) = 1025LL;
  *((value *) $y_404 + 0LL) = $y_403;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_404;
}

value y_wrapper_132(struct thread_info *$tinfo, value $env_397, value $a_398)
{
  struct stack_frame frame;
  value root[0];
  register value $y_399;
  register value $y_400;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_399 = 1LL;
  $y_400 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_400 + -1LL) = 1024LL;
  *((value *) $y_400 + 0LL) = $y_399;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_400;
}

value y_known_131(struct thread_info *$tinfo, value $x0_377, value $p_378)
{
  struct stack_frame frame;
  value root[3];
  register value $y_379;
  register value $y_380;
  register value $p_381;
  register value $env_385;
  register value $env_386;
  register value $y_388;
  register value $y_code_389;
  register value $y_env_390;
  register value $y_391;
  register value $y_wrapper_clo_393;
  register value $y_wrapper_clo_394;
  register value $y_395;
  register value $y_396;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $p_378;
    *(root + 0LL) = $x0_377;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $p_378 = *(root + 1LL);
    $x0_377 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_377 & 1) == 0) {
    switch (*((value *) $x0_377 + -1LL) & 255LL) {
      case 0:
        $p_381 = *((value *) $x0_377 + 0LL);
        $env_385 = 1LL;
        $env_386 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $env_386;
        *(root + 1LL) = $env_385;
        *(root + 0LL) = $p_381;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_388 =
          ((value (*)(struct thread_info *, value)) F_known_115)
          ($tinfo, $p_378);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $env_386 = *(root + 2LL);
        $env_385 = *(root + 1LL);
        $p_381 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_389 = *((value *) $y_388 + 0LL);
        $y_env_390 = *((value *) $y_388 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $env_386;
        *(root + 0LL) = $env_385;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_391 =
          ((value (*)(struct thread_info *, value, value)) $y_code_389)
          ($tinfo, $y_env_390, $p_381);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_391;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_391 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $env_386 = *(root + 1LL);
        $env_385 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_wrapper_clo_393 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_393 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_393 + 0LL) = y_wrapper_133;
        *((value *) $y_wrapper_clo_393 + 1LL) = $env_386;
        $y_wrapper_clo_394 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_394 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_394 + 0LL) = y_wrapper_132;
        *((value *) $y_wrapper_clo_394 + 1LL) = $env_385;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value, value)) CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112)
          ($tinfo, $y_391, $y_wrapper_clo_393, $y_wrapper_clo_394);
        return $result;
        break;
      default:
        $y_395 = 1LL;
        $y_396 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_396 + -1LL) = 1025LL;
        *((value *) $y_396 + 0LL) = $y_395;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_396;
        break;
      
    }
  } else {
    switch ($x0_377 >> 1LL) {
      default:
        $y_379 = 1LL;
        $y_380 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_380 + -1LL) = 1025LL;
        *((value *) $y_380 + 0LL) = $y_379;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_380;
        break;
      
    }
  }
}

value f_case_known_130(struct thread_info *$tinfo, value $s_367)
{
  struct stack_frame frame;
  value root[1];
  register value $y_wrapperbogus_env_368;
  register value $y_wrapper_clo_369;
  register value $p_370;
  register value $env_371;
  register value $y_wrapper_clo_372;
  register value $p_373;
  register value $env_374;
  register value $y_wrapper_clo_375;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(5LL <= $limit - $alloc)) {
    *(root + 0LL) = $s_367;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 5LL;
    garbage_collect($tinfo);
    $s_367 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_367 & 1) == 0) {
    switch (*((value *) $s_367 + -1LL) & 255LL) {
      case 0:
        $p_370 = *((value *) $s_367 + 0LL);
        $env_371 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $env_371 + -1LL) = 1024LL;
        *((value *) $env_371 + 0LL) = $p_370;
        $y_wrapper_clo_372 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_372 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_372 + 0LL) = y_wrapper_134;
        *((value *) $y_wrapper_clo_372 + 1LL) = $env_371;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_372;
        break;
      default:
        $p_373 = *((value *) $s_367 + 0LL);
        $env_374 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $env_374 + -1LL) = 1024LL;
        *((value *) $env_374 + 0LL) = $p_373;
        $y_wrapper_clo_375 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_375 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_375 + 0LL) = y_wrapper_138;
        *((value *) $y_wrapper_clo_375 + 1LL) = $env_374;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_375;
        break;
      
    }
  } else {
    switch ($s_367 >> 1LL) {
      default:
        $y_wrapperbogus_env_368 = 1LL;
        $y_wrapper_clo_369 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_369 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_369 + 0LL) = y_wrapper_129;
        *((value *) $y_wrapper_clo_369 + 1LL) = $y_wrapperbogus_env_368;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_369;
        break;
      
    }
  }
}

value y_wrapper_129(struct thread_info *$tinfo, value $env_363, value $x0_364)
{
  struct stack_frame frame;
  value root[1];
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value)) y_known_128)
    ($tinfo, $x0_364);
  return $result;
}

value y_known_128(struct thread_info *$tinfo, value $x0_356)
{
  struct stack_frame frame;
  value root[1];
  register value $y_357;
  register value $y_358;
  register value $y_359;
  register value $y_360;
  register value $y_361;
  register value $y_362;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $x0_356;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x0_356 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_356 & 1) == 0) {
    switch (*((value *) $x0_356 + -1LL) & 255LL) {
      case 0:
        $y_359 = 1LL;
        $y_360 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_360 + -1LL) = 1025LL;
        *((value *) $y_360 + 0LL) = $y_359;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_360;
        break;
      default:
        $y_361 = 1LL;
        $y_362 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_362 + -1LL) = 1025LL;
        *((value *) $y_362 + 0LL) = $y_361;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_362;
        break;
      
    }
  } else {
    switch ($x0_356 >> 1LL) {
      default:
        $y_357 = 1LL;
        $y_358 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_358 + -1LL) = 1024LL;
        *((value *) $y_358 + 0LL) = $y_357;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_358;
        break;
      
    }
  }
}

value f_case_127(struct thread_info *$tinfo, value $env_327, value $s_328)
{
  struct stack_frame frame;
  value root[3];
  register value $y_329;
  register value $p_330;
  register value $compcertdlibdIntegersdWordsize_8dwordsize_proj_331;
  register value $p_333;
  register value $compcertdlibdIntegersdWordsize_8dwordsize_proj_334;
  register value $r_336;
  register value $y_337;
  register value $y_339;
  register value $y_code_340;
  register value $y_env_341;
  register value $y_342;
  register value $y_343;
  register value $y_345;
  register value $y_proj_346;
  register value $yp_347;
  register value $y_proj_349;
  register value $y_350;
  register value $y_351;
  register value $yp_352;
  register value $y_proj_354;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_328 & 1) == 0) {
    switch (*((value *) $s_328 + -1LL) & 255LL) {
      case 0:
        $p_330 = *((value *) $s_328 + 0LL);
        $compcertdlibdIntegersdWordsize_8dwordsize_proj_331 =
          *((value *) $env_327 + 2LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) P_mod_two_p_uncurried_known_111)
          ($tinfo, $compcertdlibdIntegersdWordsize_8dwordsize_proj_331,
           $p_330);
        return $result;
        break;
      default:
        $p_333 = *((value *) $s_328 + 0LL);
        $compcertdlibdIntegersdWordsize_8dwordsize_proj_334 =
          *((value *) $env_327 + 2LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $env_327;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $r_336 =
          ((value (*)(struct thread_info *, value, value)) P_mod_two_p_uncurried_known_111)
          ($tinfo, $compcertdlibdIntegersdWordsize_8dwordsize_proj_334,
           $p_333);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $env_327 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_337 = 1LL;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 2LL) = $y_337;
        *(root + 1LL) = $r_336;
        *(root + 0LL) = $env_327;
        frame.next = root + 3LL;
        (*$tinfo).fp = &frame;
        $y_339 =
          ((value (*)(struct thread_info *, value)) f_case_known_130)
          ($tinfo, $r_336);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_337 = *(root + 2LL);
        $r_336 = *(root + 1LL);
        $env_327 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_340 = *((value *) $y_339 + 0LL);
        $y_env_341 = *((value *) $y_339 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $r_336;
        *(root + 0LL) = $env_327;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_342 =
          ((value (*)(struct thread_info *, value, value)) $y_code_340)
          ($tinfo, $y_env_341, $y_337);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $r_336 = *(root + 1LL);
        $env_327 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        if (($y_342 & 1) == 0) {
          switch (*((value *) $y_342 + -1LL) & 255LL) {
            case 0:
              $y_343 = 1LL;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_343;
              break;
            default:
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              *(root + 0LL) = $env_327;
              frame.next = root + 1LL;
              (*$tinfo).fp = &frame;
              $y_345 =
                ((value (*)(struct thread_info *, value)) f_case_known_139)
                ($tinfo, $r_336);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              $env_327 = *(root + 0LL);
              (*$tinfo).fp = frame.prev;
              if (($y_345 & 1) == 0) {
                switch (*((value *) $y_345 + -1LL) & 255LL) {
                  case 0:
                    $yp_347 = *((value *) $y_345 + 0LL);
                    $y_proj_349 = *((value *) $env_327 + 1LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    /*skip*/;
                    $y_350 =
                      ((value (*)(struct thread_info *, value, value)) 
                        add_uncurried_known_140)
                      ($tinfo, $yp_347, $y_proj_349);
                    $alloc = (*$tinfo).alloc;
                    $limit = (*$tinfo).limit;
                    if (!(2LL <= $limit - $alloc)) {
                      *(root + 0LL) = $y_350;
                      frame.next = root + 1LL;
                      (*$tinfo).fp = &frame;
                      (*$tinfo).nalloc = 2LL;
                      garbage_collect($tinfo);
                      $y_350 = *(root + 0LL);
                      (*$tinfo).fp = frame.prev;
                      $alloc = (*$tinfo).alloc;
                      $limit = (*$tinfo).limit;
                    }
                    /*skip*/;
                    $y_351 = (value) ($alloc + 1LL);
                    $alloc = $alloc + 2LL;
                    *((value *) $y_351 + -1LL) = 1024LL;
                    *((value *) $y_351 + 0LL) = $y_350;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_351;
                    break;
                  default:
                    $yp_352 = *((value *) $y_345 + 0LL);
                    $y_proj_354 = *((value *) $env_327 + 1LL);
                    $args = (*$tinfo).args;
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    $result =
                      ((value (*)(struct thread_info *, value, value)) 
                        pos_sub_uncurried_known_142)
                      ($tinfo, $yp_352, $y_proj_354);
                    return $result;
                    break;
                  
                }
              } else {
                switch ($y_345 >> 1LL) {
                  default:
                    $y_proj_346 = *((value *) $env_327 + 0LL);
                    (*$tinfo).alloc = $alloc;
                    (*$tinfo).limit = $limit;
                    return $y_proj_346;
                    break;
                  
                }
              }
              break;
            
          }
        } else {
          switch ($y_342 >> 1LL) {
            
          }
        }
        break;
      
    }
  } else {
    switch ($s_328 >> 1LL) {
      default:
        $y_329 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_329;
        break;
      
    }
  }
}

value f_case_known_126(struct thread_info *$tinfo, value $s_322)
{
  struct stack_frame frame;
  value root[1];
  register value $CoqdZArithdBinIntDefdZdsucc_double_wrapperbogus_env_323;
  register value $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324;
  register value $CoqdZArithdBinIntDefdZddouble_wrapperbogus_env_325;
  register value $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(3LL <= $limit - $alloc)) {
    *(root + 0LL) = $s_322;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LL;
    garbage_collect($tinfo);
    $s_322 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($s_322 & 1) == 0) {
    switch (*((value *) $s_322 + -1LL) & 255LL) {
      
    }
  } else {
    switch ($s_322 >> 1LL) {
      case 0:
        $CoqdZArithdBinIntDefdZdsucc_double_wrapperbogus_env_323 = 1LL;
        $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324 =
          (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324
           + -1LL) =
          2048LL;
        *((value *) $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324
           + 0LL) =
          CoqdZArithdBinIntDefdZdsucc_double_wrapper_108;
        *((value *) $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324
           + 1LL) =
          $CoqdZArithdBinIntDefdZdsucc_double_wrapperbogus_env_323;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $CoqdZArithdBinIntDefdZdsucc_double_wrapper_clo_324;
        break;
      default:
        $CoqdZArithdBinIntDefdZddouble_wrapperbogus_env_325 = 1LL;
        $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326 =
          (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326 + -1LL) =
          2048LL;
        *((value *) $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326 + 0LL) =
          CoqdZArithdBinIntDefdZddouble_wrapper_110;
        *((value *) $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326 + 1LL) =
          $CoqdZArithdBinIntDefdZddouble_wrapperbogus_env_325;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $CoqdZArithdBinIntDefdZddouble_wrapper_clo_326;
        break;
      
    }
  }
}

value to_Z_rec_uncurried_known_125(struct thread_info *$tinfo, value $i_306, value $n_307)
{
  struct stack_frame frame;
  value root[2];
  register value $y_308;
  register value $n_309;
  register value $y_311;
  register value $prim_312;
  register value $y_313;
  register value $prim_314;
  register value $y_315;
  register value $y_316;
  register value $prim_317;
  register value $y_318;
  register value $y_code_319;
  register value $y_env_320;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_307 & 1) == 0) {
    switch (*((value *) $n_307 + -1LL) & 255LL) {
      default:
        $n_309 = *((value *) $n_307 + 0LL);
        $y_311 = 3LLU;
        $prim_312 =
          ((value (*)(value, value)) prim_int63_land)
          ($i_306, $y_311);
        $y_313 = 1LLU;
        $prim_314 =
          ((value (*)(value, value)) prim_int63_eqb)
          ($prim_312, $y_313);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $n_309;
        *(root + 0LL) = $i_306;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_315 =
          ((value (*)(struct thread_info *, value)) f_case_known_126)
          ($tinfo, $prim_314);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $n_309 = *(root + 1LL);
        $i_306 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_316 = 3LLU;
        $prim_317 =
          ((value (*)(value, value)) prim_int63_lsr)
          ($i_306, $y_316);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 0LL) = $y_315;
        frame.next = root + 1LL;
        (*$tinfo).fp = &frame;
        $y_318 =
          ((value (*)(struct thread_info *, value, value)) to_Z_rec_uncurried_known_125)
          ($tinfo, $prim_317, $n_309);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        $y_315 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_code_319 = *((value *) $y_315 + 0LL);
        $y_env_320 = *((value *) $y_315 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) $y_code_319)
          ($tinfo, $y_env_320, $y_318);
        return $result;
        break;
      
    }
  } else {
    switch ($n_307 >> 1LL) {
      default:
        $y_308 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_308;
        break;
      
    }
  }
}

value succ_known_124(struct thread_info *$tinfo, value $x_297)
{
  struct stack_frame frame;
  value root[1];
  register value $p_298;
  register value $y_299;
  register value $y_300;
  register value $p_301;
  register value $y_302;
  register value $y_303;
  register value $y_304;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_297;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x_297 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_297 & 1) == 0) {
    switch (*((value *) $x_297 + -1LL) & 255LL) {
      case 0:
        $p_298 = *((value *) $x_297 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_299 =
          ((value (*)(struct thread_info *, value)) succ_known_124)
          ($tinfo, $p_298);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_299;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_299 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_300 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_300 + -1LL) = 1025LL;
        *((value *) $y_300 + 0LL) = $y_299;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_300;
        break;
      default:
        $p_301 = *((value *) $x_297 + 0LL);
        $y_302 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_302 + -1LL) = 1024LL;
        *((value *) $y_302 + 0LL) = $p_301;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_302;
        break;
      
    }
  } else {
    switch ($x_297 >> 1LL) {
      default:
        $y_303 = 1LL;
        $y_304 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_304 + -1LL) = 1025LL;
        *((value *) $y_304 + 0LL) = $y_303;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_304;
        break;
      
    }
  }
}

value y_wrapper_123(struct thread_info *$tinfo, value $env_292, value $x0_293)
{
  struct stack_frame frame;
  value root[2];
  register value $y_proj_295;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $y_proj_295 = *((value *) $env_292 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value)) y_known_120)
    ($tinfo, $x0_293, $y_proj_295);
  return $result;
}

value y_wrapper_122(struct thread_info *$tinfo, value $env_288, value $diseq_289)
{
  struct stack_frame frame;
  value root[0];
  register value $y_290;
  register value $y_291;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_290 = 1LL;
  $y_291 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_291 + -1LL) = 1025LL;
  *((value *) $y_291 + 0LL) = $y_290;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_291;
}

value y_wrapper_121(struct thread_info *$tinfo, value $env_284, value $a_285)
{
  struct stack_frame frame;
  value root[0];
  register value $y_286;
  register value $y_287;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_286 = 1LL;
  $y_287 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_287 + -1LL) = 1024LL;
  *((value *) $y_287 + 0LL) = $y_286;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_287;
}

value y_known_120(struct thread_info *$tinfo, value $x0_266, value $y_267)
{
  struct stack_frame frame;
  value root[3];
  register value $y_268;
  register value $y_269;
  register value $p_270;
  register value $env_274;
  register value $env_275;
  register value $y_code_276;
  register value $y_env_277;
  register value $y_278;
  register value $y_wrapper_clo_280;
  register value $y_wrapper_clo_281;
  register value $y_282;
  register value $y_283;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $y_267;
    *(root + 0LL) = $x0_266;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_267 = *(root + 1LL);
    $x0_266 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_266 & 1) == 0) {
    switch (*((value *) $x0_266 + -1LL) & 255LL) {
      case 0:
        $y_268 = 1LL;
        $y_269 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_269 + -1LL) = 1025LL;
        *((value *) $y_269 + 0LL) = $y_268;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_269;
        break;
      default:
        $p_270 = *((value *) $x0_266 + 0LL);
        $env_274 = 1LL;
        $env_275 = 1LL;
        $y_code_276 = *((value *) $y_267 + 0LL);
        $y_env_277 = *((value *) $y_267 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $env_275;
        *(root + 0LL) = $env_274;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_278 =
          ((value (*)(struct thread_info *, value, value)) $y_code_276)
          ($tinfo, $y_env_277, $p_270);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_278;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_278 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $env_275 = *(root + 1LL);
        $env_274 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_wrapper_clo_280 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_280 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_280 + 0LL) = y_wrapper_122;
        *((value *) $y_wrapper_clo_280 + 1LL) = $env_275;
        $y_wrapper_clo_281 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_281 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_281 + 0LL) = y_wrapper_121;
        *((value *) $y_wrapper_clo_281 + 1LL) = $env_274;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value, value)) CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112)
          ($tinfo, $y_278, $y_wrapper_clo_280, $y_wrapper_clo_281);
        return $result;
        break;
      
    }
  } else {
    switch ($x0_266 >> 1LL) {
      default:
        $y_282 = 1LL;
        $y_283 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_283 + -1LL) = 1025LL;
        *((value *) $y_283 + 0LL) = $y_282;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_283;
        break;
      
    }
  }
}

value y_wrapper_119(struct thread_info *$tinfo, value $env_261, value $x0_262)
{
  struct stack_frame frame;
  value root[2];
  register value $y_proj_264;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $y_proj_264 = *((value *) $env_261 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value)) y_known_116)
    ($tinfo, $x0_262, $y_proj_264);
  return $result;
}

static value y_wrapper_118(struct thread_info *$tinfo, value $env_257, value $diseq_258)
{
  struct stack_frame frame;
  value root[0];
  register value $y_259;
  register value $y_260;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_259 = 1LL;
  $y_260 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_260 + -1LL) = 1025LL;
  *((value *) $y_260 + 0LL) = $y_259;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_260;
}

value y_wrapper_117(struct thread_info *$tinfo, value $env_253, value $a_254)
{
  struct stack_frame frame;
  value root[0];
  register value $y_255;
  register value $y_256;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_255 = 1LL;
  $y_256 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_256 + -1LL) = 1024LL;
  *((value *) $y_256 + 0LL) = $y_255;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $y_256;
}

value y_known_116(struct thread_info *$tinfo, value $x0_235, value $y_236)
{
  struct stack_frame frame;
  value root[3];
  register value $p_237;
  register value $env_241;
  register value $env_242;
  register value $y_code_243;
  register value $y_env_244;
  register value $y_245;
  register value $y_wrapper_clo_247;
  register value $y_wrapper_clo_248;
  register value $y_249;
  register value $y_250;
  register value $y_251;
  register value $y_252;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $y_236;
    *(root + 0LL) = $x0_235;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $y_236 = *(root + 1LL);
    $x0_235 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_235 & 1) == 0) {
    switch (*((value *) $x0_235 + -1LL) & 255LL) {
      case 0:
        $p_237 = *((value *) $x0_235 + 0LL);
        $env_241 = 1LL;
        $env_242 = 1LL;
        $y_code_243 = *((value *) $y_236 + 0LL);
        $y_env_244 = *((value *) $y_236 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        *(root + 1LL) = $env_242;
        *(root + 0LL) = $env_241;
        frame.next = root + 2LL;
        (*$tinfo).fp = &frame;
        $y_245 =
          ((value (*)(struct thread_info *, value, value)) $y_code_243)
          ($tinfo, $y_env_244, $p_237);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(6LL <= $limit - $alloc)) {
          *(root + 2LL) = $y_245;
          frame.next = root + 3LL;
          (*$tinfo).nalloc = 6LL;
          garbage_collect($tinfo);
          $y_245 = *(root + 2LL);
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        $env_242 = *(root + 1LL);
        $env_241 = *(root + 0LL);
        (*$tinfo).fp = frame.prev;
        $y_wrapper_clo_247 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_247 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_247 + 0LL) = y_wrapper_118;
        *((value *) $y_wrapper_clo_247 + 1LL) = $env_242;
        $y_wrapper_clo_248 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_248 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_248 + 0LL) = y_wrapper_117;
        *((value *) $y_wrapper_clo_248 + 1LL) = $env_241;
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value, value)) CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112)
          ($tinfo, $y_245, $y_wrapper_clo_247, $y_wrapper_clo_248);
        return $result;
        break;
      default:
        $y_249 = 1LL;
        $y_250 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_250 + -1LL) = 1025LL;
        *((value *) $y_250 + 0LL) = $y_249;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_250;
        break;
      
    }
  } else {
    switch ($x0_235 >> 1LL) {
      default:
        $y_251 = 1LL;
        $y_252 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_252 + -1LL) = 1025LL;
        *((value *) $y_252 + 0LL) = $y_251;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_252;
        break;
      
    }
  }
}

value F_known_115(struct thread_info *$tinfo, value $p_223)
{
  struct stack_frame frame;
  value root[1];
  register value $p_224;
  register value $y_225;
  register value $env_226;
  register value $y_wrapper_clo_227;
  register value $p_228;
  register value $y_229;
  register value $env_230;
  register value $y_wrapper_clo_231;
  register value $y_wrapperbogus_env_232;
  register value $y_wrapper_clo_233;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(3LL <= $limit - $alloc)) {
    *(root + 0LL) = $p_223;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 3LL;
    garbage_collect($tinfo);
    $p_223 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($p_223 & 1) == 0) {
    switch (*((value *) $p_223 + -1LL) & 255LL) {
      case 0:
        $p_224 = *((value *) $p_223 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_225 =
          ((value (*)(struct thread_info *, value)) F_known_115)
          ($tinfo, $p_224);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(5LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_225;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 5LL;
          garbage_collect($tinfo);
          $y_225 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $env_226 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $env_226 + -1LL) = 1024LL;
        *((value *) $env_226 + 0LL) = $y_225;
        $y_wrapper_clo_227 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_227 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_227 + 0LL) = y_wrapper_119;
        *((value *) $y_wrapper_clo_227 + 1LL) = $env_226;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_227;
        break;
      default:
        $p_228 = *((value *) $p_223 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_229 =
          ((value (*)(struct thread_info *, value)) F_known_115)
          ($tinfo, $p_228);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(5LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_229;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 5LL;
          garbage_collect($tinfo);
          $y_229 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $env_230 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $env_230 + -1LL) = 1024LL;
        *((value *) $env_230 + 0LL) = $y_229;
        $y_wrapper_clo_231 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_231 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_231 + 0LL) = y_wrapper_123;
        *((value *) $y_wrapper_clo_231 + 1LL) = $env_230;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_231;
        break;
      
    }
  } else {
    switch ($p_223 >> 1LL) {
      default:
        $y_wrapperbogus_env_232 = 1LL;
        $y_wrapper_clo_233 = (value) ($alloc + 1LL);
        $alloc = $alloc + 3LL;
        *((value *) $y_wrapper_clo_233 + -1LL) = 2048LL;
        *((value *) $y_wrapper_clo_233 + 0LL) = y_wrapper_114;
        *((value *) $y_wrapper_clo_233 + 1LL) = $y_wrapperbogus_env_232;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_wrapper_clo_233;
        break;
      
    }
  }
}

value y_wrapper_114(struct thread_info *$tinfo, value $env_219, value $x0_220)
{
  struct stack_frame frame;
  value root[1];
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value)) y_known_113)
    ($tinfo, $x0_220);
  return $result;
}

value y_known_113(struct thread_info *$tinfo, value $x0_212)
{
  struct stack_frame frame;
  value root[1];
  register value $y_213;
  register value $y_214;
  register value $y_215;
  register value $y_216;
  register value $y_217;
  register value $y_218;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 0LL) = $x0_212;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $x0_212 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x0_212 & 1) == 0) {
    switch (*((value *) $x0_212 + -1LL) & 255LL) {
      case 0:
        $y_213 = 1LL;
        $y_214 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_214 + -1LL) = 1025LL;
        *((value *) $y_214 + 0LL) = $y_213;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_214;
        break;
      default:
        $y_215 = 1LL;
        $y_216 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_216 + -1LL) = 1025LL;
        *((value *) $y_216 + 0LL) = $y_215;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_216;
        break;
      
    }
  } else {
    switch ($x0_212 >> 1LL) {
      default:
        $y_217 = 1LL;
        $y_218 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_218 + -1LL) = 1024LL;
        *((value *) $y_218 + 0LL) = $y_217;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_218;
        break;
      
    }
  }
}

value CoqdInitdSpecifdsumbool_rec_uncurried_uncurried_uncurried_uncurried_uncurried_known_112(struct thread_info *$tinfo, value $s_199, value $f0_200, value $f_201)
{
  struct stack_frame frame;
  value root[3];
  register value $y_205;
  register value $f_code_206;
  register value $f_env_207;
  register value $y_208;
  register value $f0_code_209;
  register value $f0_env_210;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($s_199 & 1) == 0) {
    switch (*((value *) $s_199 + -1LL) & 255LL) {
      case 0:
        $y_205 = 1LL;
        $f_code_206 = *((value *) $f_201 + 0LL);
        $f_env_207 = *((value *) $f_201 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) $f_code_206)
          ($tinfo, $f_env_207, $y_205);
        return $result;
        break;
      default:
        $y_208 = 1LL;
        $f0_code_209 = *((value *) $f0_200 + 0LL);
        $f0_env_210 = *((value *) $f0_200 + 1LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) $f0_code_209)
          ($tinfo, $f0_env_210, $y_208);
        return $result;
        break;
      
    }
  } else {
    switch ($s_199 >> 1LL) {
      
    }
  }
}

value P_mod_two_p_uncurried_known_111(struct thread_info *$tinfo, value $n_186, value $p_187)
{
  struct stack_frame frame;
  value root[2];
  register value $y_188;
  register value $m_189;
  register value $q_190;
  register value $y_191;
  register value $q_193;
  register value $y_194;
  register value $y_196;
  register value $y_197;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(2LL <= $limit - $alloc)) {
    *(root + 1LL) = $p_187;
    *(root + 0LL) = $n_186;
    frame.next = root + 2LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 2LL;
    garbage_collect($tinfo);
    $p_187 = *(root + 1LL);
    $n_186 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($n_186 & 1) == 0) {
    switch (*((value *) $n_186 + -1LL) & 255LL) {
      default:
        $m_189 = *((value *) $n_186 + 0LL);
        if (($p_187 & 1) == 0) {
          switch (*((value *) $p_187 + -1LL) & 255LL) {
            case 0:
              $q_190 = *((value *) $p_187 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_191 =
                ((value (*)(struct thread_info *, value, value)) P_mod_two_p_uncurried_known_111)
                ($tinfo, $m_189, $q_190);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdsucc_double_known_107)
                ($tinfo, $y_191);
              return $result;
              break;
            default:
              $q_193 = *((value *) $p_187 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_194 =
                ((value (*)(struct thread_info *, value, value)) P_mod_two_p_uncurried_known_111)
                ($tinfo, $m_189, $q_193);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              $result =
                ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_109)
                ($tinfo, $y_194);
              return $result;
              break;
            
          }
        } else {
          switch ($p_187 >> 1LL) {
            default:
              $y_196 = 1LL;
              $y_197 = (value) ($alloc + 1LL);
              $alloc = $alloc + 2LL;
              *((value *) $y_197 + -1LL) = 1024LL;
              *((value *) $y_197 + 0LL) = $y_196;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_197;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($n_186 >> 1LL) {
      default:
        $y_188 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_188;
        break;
      
    }
  }
}

value CoqdZArithdBinIntDefdZddouble_wrapper_110(struct thread_info *$tinfo, value $env_182, value $x_183)
{
  struct stack_frame frame;
  value root[1];
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZddouble_known_109)
    ($tinfo, $x_183);
  return $result;
}

value CoqdZArithdBinIntDefdZddouble_known_109(struct thread_info *$tinfo, value $x_174)
{
  struct stack_frame frame;
  value root[1];
  register value $y_175;
  register value $p_176;
  register value $y_177;
  register value $y_178;
  register value $p_179;
  register value $y_180;
  register value $y_181;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_174;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_174 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_174 & 1) == 0) {
    switch (*((value *) $x_174 + -1LL) & 255LL) {
      case 0:
        $p_176 = *((value *) $x_174 + 0LL);
        $y_177 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_177 + -1LL) = 1025LL;
        *((value *) $y_177 + 0LL) = $p_176;
        $y_178 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_178 + -1LL) = 1024LL;
        *((value *) $y_178 + 0LL) = $y_177;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_178;
        break;
      default:
        $p_179 = *((value *) $x_174 + 0LL);
        $y_180 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_180 + -1LL) = 1025LL;
        *((value *) $y_180 + 0LL) = $p_179;
        $y_181 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_181 + -1LL) = 1025LL;
        *((value *) $y_181 + 0LL) = $y_180;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_181;
        break;
      
    }
  } else {
    switch ($x_174 >> 1LL) {
      default:
        $y_175 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_175;
        break;
      
    }
  }
}

value CoqdZArithdBinIntDefdZdsucc_double_wrapper_108(struct thread_info *$tinfo, value $env_170, value $x_171)
{
  struct stack_frame frame;
  value root[1];
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value)) CoqdZArithdBinIntDefdZdsucc_double_known_107)
    ($tinfo, $x_171);
  return $result;
}

value CoqdZArithdBinIntDefdZdsucc_double_known_107(struct thread_info *$tinfo, value $x_160)
{
  struct stack_frame frame;
  value root[1];
  register value $y_161;
  register value $y_162;
  register value $p_163;
  register value $y_164;
  register value $y_165;
  register value $p_166;
  register value $y_168;
  register value $y_169;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_160;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_160 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_160 & 1) == 0) {
    switch (*((value *) $x_160 + -1LL) & 255LL) {
      case 0:
        $p_163 = *((value *) $x_160 + 0LL);
        $y_164 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_164 + -1LL) = 1024LL;
        *((value *) $y_164 + 0LL) = $p_163;
        $y_165 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_165 + -1LL) = 1024LL;
        *((value *) $y_165 + 0LL) = $y_164;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_165;
        break;
      default:
        $p_166 = *((value *) $x_160 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_168 =
          ((value (*)(struct thread_info *, value)) pred_double_known_106)
          ($tinfo, $p_166);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_168;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_168 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_169 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_169 + -1LL) = 1025LL;
        *((value *) $y_169 + 0LL) = $y_168;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_169;
        break;
      
    }
  } else {
    switch ($x_160 >> 1LL) {
      default:
        $y_161 = 1LL;
        $y_162 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_162 + -1LL) = 1024LL;
        *((value *) $y_162 + 0LL) = $y_161;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_162;
        break;
      
    }
  }
}

value pred_double_known_106(struct thread_info *$tinfo, value $x_151)
{
  struct stack_frame frame;
  value root[1];
  register value $p_152;
  register value $y_153;
  register value $y_154;
  register value $p_155;
  register value $y_156;
  register value $y_157;
  register value $y_158;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(4LL <= $limit - $alloc)) {
    *(root + 0LL) = $x_151;
    frame.next = root + 1LL;
    (*$tinfo).fp = &frame;
    (*$tinfo).nalloc = 4LL;
    garbage_collect($tinfo);
    $x_151 = *(root + 0LL);
    (*$tinfo).fp = frame.prev;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  if (($x_151 & 1) == 0) {
    switch (*((value *) $x_151 + -1LL) & 255LL) {
      case 0:
        $p_152 = *((value *) $x_151 + 0LL);
        $y_153 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_153 + -1LL) = 1025LL;
        *((value *) $y_153 + 0LL) = $p_152;
        $y_154 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_154 + -1LL) = 1024LL;
        *((value *) $y_154 + 0LL) = $y_153;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_154;
        break;
      default:
        $p_155 = *((value *) $x_151 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_156 =
          ((value (*)(struct thread_info *, value)) pred_double_known_106)
          ($tinfo, $p_155);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_156;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_156 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_157 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_157 + -1LL) = 1024LL;
        *((value *) $y_157 + 0LL) = $y_156;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_157;
        break;
      
    }
  } else {
    switch ($x_151 >> 1LL) {
      default:
        $y_158 = 1LL;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_158;
        break;
      
    }
  }
}

value F_known_105(struct thread_info *$tinfo, value $n_145, value $y_146)
{
  struct stack_frame frame;
  value root[2];
  register value $n_147;
  register value $y_148;
  register value $y_149;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  register _Bool $arg;
  register value $result;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (($n_145 & 1) == 0) {
    switch (*((value *) $n_145 + -1LL) & 255LL) {
      default:
        $n_147 = *((value *) $n_145 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_148 =
          ((value (*)(struct thread_info *, value, value)) F_known_105)
          ($tinfo, $n_147, $y_146);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        if (!(2LL <= $limit - $alloc)) {
          *(root + 0LL) = $y_148;
          frame.next = root + 1LL;
          (*$tinfo).fp = &frame;
          (*$tinfo).nalloc = 2LL;
          garbage_collect($tinfo);
          $y_148 = *(root + 0LL);
          (*$tinfo).fp = frame.prev;
          $alloc = (*$tinfo).alloc;
          $limit = (*$tinfo).limit;
        }
        /*skip*/;
        $y_149 = (value) ($alloc + 1LL);
        $alloc = $alloc + 2LL;
        *((value *) $y_149 + -1LL) = 1025LL;
        *((value *) $y_149 + 0LL) = $y_148;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_149;
        break;
      
    }
  } else {
    switch ($n_145 >> 1LL) {
      default:
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_146;
        break;
      
    }
  }
}

value generate_uint_to_byte_fun(struct thread_info *$tinfo)
{
  struct stack_frame frame;
  value root[2];
  register value $y_561;
  register value $y_562;
  register value $y_563;
  register value $y_564;
  register value $y_565;
  register value $y_566;
  register value $y_567;
  register value $y_568;
  register value $compcertdlibdIntegersdWordsize_8dwordsize_569;
  register value $y_570;
  register value $y_572;
  register value $y_573;
  register value $y_574;
  register value $y_575;
  register value $y_576;
  register value $y_577;
  register value $y_578;
  register value $y_579;
  register value $y_580;
  register value $y_581;
  register value $y_582;
  register value $y_583;
  register value $y_584;
  register value $y_585;
  register value $y_586;
  register value $y_587;
  register value $y_588;
  register value $y_589;
  register value $y_590;
  register value $y_591;
  register value $y_592;
  register value $y_593;
  register value $y_594;
  register value $y_595;
  register value $y_596;
  register value $y_597;
  register value $y_598;
  register value $y_599;
  register value $y_600;
  register value $y_601;
  register value $y_602;
  register value $y_603;
  register value $y_604;
  register value $y_605;
  register value $y_606;
  register value $y_607;
  register value $y_608;
  register value $y_609;
  register value $y_610;
  register value $y_611;
  register value $y_612;
  register value $y_613;
  register value $y_614;
  register value $y_615;
  register value $y_616;
  register value $y_617;
  register value $y_618;
  register value $y_619;
  register value $y_620;
  register value $y_621;
  register value $y_622;
  register value $y_623;
  register value $y_624;
  register value $y_625;
  register value $y_626;
  register value $y_627;
  register value $y_628;
  register value $y_629;
  register value $y_630;
  register value $y_631;
  register value $y_632;
  register value $y_633;
  register value $y_634;
  register value $y_635;
  register value $y_636;
  register value $CoqdNumbersdCyclicdInt63dUint63dsize_637;
  register value $env_638;
  register value $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(16LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 16LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_561 = 1LL;
  $y_562 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_562 + -1LL) = 1024LL;
  *((value *) $y_562 + 0LL) = $y_561;
  $y_563 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_563 + -1LL) = 1024LL;
  *((value *) $y_563 + 0LL) = $y_562;
  $y_564 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_564 + -1LL) = 1024LL;
  *((value *) $y_564 + 0LL) = $y_563;
  $y_565 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_565 + -1LL) = 1024LL;
  *((value *) $y_565 + 0LL) = $y_564;
  $y_566 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_566 + -1LL) = 1024LL;
  *((value *) $y_566 + 0LL) = $y_565;
  $y_567 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_567 + -1LL) = 1024LL;
  *((value *) $y_567 + 0LL) = $y_566;
  $y_568 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_568 + -1LL) = 1024LL;
  *((value *) $y_568 + 0LL) = $y_567;
  $compcertdlibdIntegersdWordsize_8dwordsize_569 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $compcertdlibdIntegersdWordsize_8dwordsize_569 + -1LL) =
    1024LL;
  *((value *) $compcertdlibdIntegersdWordsize_8dwordsize_569 + 0LL) = $y_568;
  $y_570 = 1LL;
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  *(root + 0LL) = $compcertdlibdIntegersdWordsize_8dwordsize_569;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $y_572 =
    ((value (*)(struct thread_info *, value, value)) F_known_105)
    ($tinfo, $compcertdlibdIntegersdWordsize_8dwordsize_569, $y_570);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  if (!(136LL <= $limit - $alloc)) {
    *(root + 1LL) = $y_572;
    frame.next = root + 2LL;
    (*$tinfo).nalloc = 136LL;
    garbage_collect($tinfo);
    $y_572 = *(root + 1LL);
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $compcertdlibdIntegersdWordsize_8dwordsize_569 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  $y_573 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_573 + -1LL) = 1024LL;
  *((value *) $y_573 + 0LL) = $y_572;
  $y_574 = 1LL;
  $y_575 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_575 + -1LL) = 1024LL;
  *((value *) $y_575 + 0LL) = $y_574;
  $y_576 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_576 + -1LL) = 1024LL;
  *((value *) $y_576 + 0LL) = $y_575;
  $y_577 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_577 + -1LL) = 1024LL;
  *((value *) $y_577 + 0LL) = $y_576;
  $y_578 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_578 + -1LL) = 1024LL;
  *((value *) $y_578 + 0LL) = $y_577;
  $y_579 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_579 + -1LL) = 1024LL;
  *((value *) $y_579 + 0LL) = $y_578;
  $y_580 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_580 + -1LL) = 1024LL;
  *((value *) $y_580 + 0LL) = $y_579;
  $y_581 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_581 + -1LL) = 1024LL;
  *((value *) $y_581 + 0LL) = $y_580;
  $y_582 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_582 + -1LL) = 1024LL;
  *((value *) $y_582 + 0LL) = $y_581;
  $y_583 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_583 + -1LL) = 1024LL;
  *((value *) $y_583 + 0LL) = $y_582;
  $y_584 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_584 + -1LL) = 1024LL;
  *((value *) $y_584 + 0LL) = $y_583;
  $y_585 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_585 + -1LL) = 1024LL;
  *((value *) $y_585 + 0LL) = $y_584;
  $y_586 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_586 + -1LL) = 1024LL;
  *((value *) $y_586 + 0LL) = $y_585;
  $y_587 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_587 + -1LL) = 1024LL;
  *((value *) $y_587 + 0LL) = $y_586;
  $y_588 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_588 + -1LL) = 1024LL;
  *((value *) $y_588 + 0LL) = $y_587;
  $y_589 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_589 + -1LL) = 1024LL;
  *((value *) $y_589 + 0LL) = $y_588;
  $y_590 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_590 + -1LL) = 1024LL;
  *((value *) $y_590 + 0LL) = $y_589;
  $y_591 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_591 + -1LL) = 1024LL;
  *((value *) $y_591 + 0LL) = $y_590;
  $y_592 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_592 + -1LL) = 1024LL;
  *((value *) $y_592 + 0LL) = $y_591;
  $y_593 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_593 + -1LL) = 1024LL;
  *((value *) $y_593 + 0LL) = $y_592;
  $y_594 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_594 + -1LL) = 1024LL;
  *((value *) $y_594 + 0LL) = $y_593;
  $y_595 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_595 + -1LL) = 1024LL;
  *((value *) $y_595 + 0LL) = $y_594;
  $y_596 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_596 + -1LL) = 1024LL;
  *((value *) $y_596 + 0LL) = $y_595;
  $y_597 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_597 + -1LL) = 1024LL;
  *((value *) $y_597 + 0LL) = $y_596;
  $y_598 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_598 + -1LL) = 1024LL;
  *((value *) $y_598 + 0LL) = $y_597;
  $y_599 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_599 + -1LL) = 1024LL;
  *((value *) $y_599 + 0LL) = $y_598;
  $y_600 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_600 + -1LL) = 1024LL;
  *((value *) $y_600 + 0LL) = $y_599;
  $y_601 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_601 + -1LL) = 1024LL;
  *((value *) $y_601 + 0LL) = $y_600;
  $y_602 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_602 + -1LL) = 1024LL;
  *((value *) $y_602 + 0LL) = $y_601;
  $y_603 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_603 + -1LL) = 1024LL;
  *((value *) $y_603 + 0LL) = $y_602;
  $y_604 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_604 + -1LL) = 1024LL;
  *((value *) $y_604 + 0LL) = $y_603;
  $y_605 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_605 + -1LL) = 1024LL;
  *((value *) $y_605 + 0LL) = $y_604;
  $y_606 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_606 + -1LL) = 1024LL;
  *((value *) $y_606 + 0LL) = $y_605;
  $y_607 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_607 + -1LL) = 1024LL;
  *((value *) $y_607 + 0LL) = $y_606;
  $y_608 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_608 + -1LL) = 1024LL;
  *((value *) $y_608 + 0LL) = $y_607;
  $y_609 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_609 + -1LL) = 1024LL;
  *((value *) $y_609 + 0LL) = $y_608;
  $y_610 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_610 + -1LL) = 1024LL;
  *((value *) $y_610 + 0LL) = $y_609;
  $y_611 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_611 + -1LL) = 1024LL;
  *((value *) $y_611 + 0LL) = $y_610;
  $y_612 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_612 + -1LL) = 1024LL;
  *((value *) $y_612 + 0LL) = $y_611;
  $y_613 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_613 + -1LL) = 1024LL;
  *((value *) $y_613 + 0LL) = $y_612;
  $y_614 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_614 + -1LL) = 1024LL;
  *((value *) $y_614 + 0LL) = $y_613;
  $y_615 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_615 + -1LL) = 1024LL;
  *((value *) $y_615 + 0LL) = $y_614;
  $y_616 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_616 + -1LL) = 1024LL;
  *((value *) $y_616 + 0LL) = $y_615;
  $y_617 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_617 + -1LL) = 1024LL;
  *((value *) $y_617 + 0LL) = $y_616;
  $y_618 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_618 + -1LL) = 1024LL;
  *((value *) $y_618 + 0LL) = $y_617;
  $y_619 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_619 + -1LL) = 1024LL;
  *((value *) $y_619 + 0LL) = $y_618;
  $y_620 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_620 + -1LL) = 1024LL;
  *((value *) $y_620 + 0LL) = $y_619;
  $y_621 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_621 + -1LL) = 1024LL;
  *((value *) $y_621 + 0LL) = $y_620;
  $y_622 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_622 + -1LL) = 1024LL;
  *((value *) $y_622 + 0LL) = $y_621;
  $y_623 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_623 + -1LL) = 1024LL;
  *((value *) $y_623 + 0LL) = $y_622;
  $y_624 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_624 + -1LL) = 1024LL;
  *((value *) $y_624 + 0LL) = $y_623;
  $y_625 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_625 + -1LL) = 1024LL;
  *((value *) $y_625 + 0LL) = $y_624;
  $y_626 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_626 + -1LL) = 1024LL;
  *((value *) $y_626 + 0LL) = $y_625;
  $y_627 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_627 + -1LL) = 1024LL;
  *((value *) $y_627 + 0LL) = $y_626;
  $y_628 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_628 + -1LL) = 1024LL;
  *((value *) $y_628 + 0LL) = $y_627;
  $y_629 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_629 + -1LL) = 1024LL;
  *((value *) $y_629 + 0LL) = $y_628;
  $y_630 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_630 + -1LL) = 1024LL;
  *((value *) $y_630 + 0LL) = $y_629;
  $y_631 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_631 + -1LL) = 1024LL;
  *((value *) $y_631 + 0LL) = $y_630;
  $y_632 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_632 + -1LL) = 1024LL;
  *((value *) $y_632 + 0LL) = $y_631;
  $y_633 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_633 + -1LL) = 1024LL;
  *((value *) $y_633 + 0LL) = $y_632;
  $y_634 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_634 + -1LL) = 1024LL;
  *((value *) $y_634 + 0LL) = $y_633;
  $y_635 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_635 + -1LL) = 1024LL;
  *((value *) $y_635 + 0LL) = $y_634;
  $y_636 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_636 + -1LL) = 1024LL;
  *((value *) $y_636 + 0LL) = $y_635;
  $CoqdNumbersdCyclicdInt63dUint63dsize_637 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CoqdNumbersdCyclicdInt63dUint63dsize_637 + -1LL) = 1024LL;
  *((value *) $CoqdNumbersdCyclicdInt63dUint63dsize_637 + 0LL) = $y_636;
  $env_638 = (value) ($alloc + 1LL);
  $alloc = $alloc + 5LL;
  *((value *) $env_638 + -1LL) = 4096LL;
  *((value *) $env_638 + 0LL) =
    $compcertdlibdIntegersdWordsize_8dwordsize_569;
  *((value *) $env_638 + 1LL) = $y_572;
  *((value *) $env_638 + 2LL) = $y_573;
  *((value *) $env_638 + 3LL) = $CoqdNumbersdCyclicdInt63dUint63dsize_637;
  $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639
     + -1LL) =
    2048LL;
  *((value *) $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639
     + 0LL) =
    CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_143;
  *((value *) $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639
     + 1LL) =
    $env_638;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $CertiCoqdBenchmarksdtestsduint63_to_byte_wrapper_clo_639;
}


#endif /* CERTICOQ_BENCHMARKS_TESTS_UINT63_TO_BYTE_C */
