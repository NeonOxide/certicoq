#ifndef CERTICOQ_BENCHMARKS_TESTS_BYTE_TO_UINT63_C
#define CERTICOQ_BENCHMARKS_TESTS_BYTE_TO_UINT63_C
#include <gc_stack.h>
#include <prim_int63.h>
#include <prim_string.h>
#include <prim_floats.h>
#include <prim_int63.h>
#include <coq_c_ffi.h>
#include "CertiCoq.Benchmarks.tests.byte_to_uint63.h"
extern struct thread_info *make_tinfo(void);
extern value CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_108(struct thread_info *, value, value);
extern value f_case_known_107(struct thread_info *, value);
extern value CertiCoqdBenchmarksdtestsdbyte_to_uint63_known_106(struct thread_info *, value, value);
extern value of_pos_rec_uncurried_known_105(struct thread_info *, value, value);
extern value body(struct thread_info *);
value CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_108(struct thread_info *, value, value);
value f_case_known_107(struct thread_info *, value);
value CertiCoqdBenchmarksdtestsdbyte_to_uint63_known_106(struct thread_info *, value, value);
value of_pos_rec_uncurried_known_105(struct thread_info *, value, value);
value generate_byte_to_uint_fun(struct thread_info *);
unsigned long long const body_info_215[2] = { 131LL, 0LL, };

unsigned long long const of_pos_rec_uncurried_known_info_214[4] = { 0LL, 2LL,
  0LL, 1LL, };

unsigned long long const CertiCoqdBenchmarksdtestsdbyte_to_uint63_known_info_213[4] = {
  0LL, 2LL, 0LL, 1LL, };

unsigned long long const f_case_known_info_212[3] = { 0LL, 1LL, 0LL, };

unsigned long long const CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_info_211[4] = {
  0LL, 2LL, 0LL, 1LL, };

value CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_108(struct thread_info *$tinfo, value $env_141, value $b_142)
{
  struct stack_frame frame;
  value root[2];
  register value $CoqdNumbersdCyclicdInt63dUint63dsize_proj_144;
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
  $CoqdNumbersdCyclicdInt63dUint63dsize_proj_144 =
    *((value *) $env_141 + 0LL);
  $args = (*$tinfo).args;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  $result =
    ((value (*)(struct thread_info *, value, value)) CertiCoqdBenchmarksdtestsdbyte_to_uint63_known_106)
    ($tinfo, $b_142, $CoqdNumbersdCyclicdInt63dUint63dsize_proj_144);
  return $result;
}

value f_case_known_107(struct thread_info *$tinfo, value $s_139)
{
  struct stack_frame frame;
  value root[1];
  register value $intval_140;
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
  if (($s_139 & 1) == 0) {
    switch (*((value *) $s_139 + -1LL) & 255LL) {
      default:
        $intval_140 = *((value *) $s_139 + 0LL);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $intval_140;
        break;
      
    }
  } else {
    switch ($s_139 >> 1LL) {
      
    }
  }
}

value CertiCoqdBenchmarksdtestsdbyte_to_uint63_known_106(struct thread_info *$tinfo, value $b_126, value $CoqdNumbersdCyclicdInt63dUint63dsize_127)
{
  struct stack_frame frame;
  value root[2];
  register value $y_129;
  register value $y_130;
  register value $p_131;
  register value $p_133;
  register value $y_135;
  register value $y_136;
  register value $prim_137;
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
  *(root + 0LL) = $CoqdNumbersdCyclicdInt63dUint63dsize_127;
  frame.next = root + 1LL;
  (*$tinfo).fp = &frame;
  $y_129 =
    ((value (*)(struct thread_info *, value)) f_case_known_107)
    ($tinfo, $b_126);
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $CoqdNumbersdCyclicdInt63dUint63dsize_127 = *(root + 0LL);
  (*$tinfo).fp = frame.prev;
  if (($y_129 & 1) == 0) {
    switch (*((value *) $y_129 + -1LL) & 255LL) {
      case 0:
        $p_131 = *((value *) $y_129 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        $result =
          ((value (*)(struct thread_info *, value, value)) of_pos_rec_uncurried_known_105)
          ($tinfo, $p_131, $CoqdNumbersdCyclicdInt63dUint63dsize_127);
        return $result;
        break;
      default:
        $p_133 = *((value *) $y_129 + 0LL);
        $args = (*$tinfo).args;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        /*skip*/;
        $y_135 =
          ((value (*)(struct thread_info *, value, value)) of_pos_rec_uncurried_known_105)
          ($tinfo, $p_133, $CoqdNumbersdCyclicdInt63dUint63dsize_127);
        $alloc = (*$tinfo).alloc;
        $limit = (*$tinfo).limit;
        /*skip*/;
        $y_136 = 1LLU;
        $prim_137 =
          ((value (*)(value, value)) prim_int63_sub)
          ($y_136, $y_135);
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $prim_137;
        break;
      
    }
  } else {
    switch ($y_129 >> 1LL) {
      default:
        $y_130 = 1LLU;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_130;
        break;
      
    }
  }
}

value of_pos_rec_uncurried_known_105(struct thread_info *$tinfo, value $p_110, value $n_111)
{
  struct stack_frame frame;
  value root[2];
  register value $y_112;
  register value $n_113;
  register value $p_114;
  register value $y_115;
  register value $y_116;
  register value $prim_117;
  register value $y_118;
  register value $prim_119;
  register value $p_120;
  register value $y_121;
  register value $y_122;
  register value $prim_123;
  register value $y_124;
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
  if (($n_111 & 1) == 0) {
    switch (*((value *) $n_111 + -1LL) & 255LL) {
      default:
        $n_113 = *((value *) $n_111 + 0LL);
        if (($p_110 & 1) == 0) {
          switch (*((value *) $p_110 + -1LL) & 255LL) {
            case 0:
              $p_114 = *((value *) $p_110 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_115 =
                ((value (*)(struct thread_info *, value, value)) of_pos_rec_uncurried_known_105)
                ($tinfo, $p_114, $n_113);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $y_116 = 3LLU;
              $prim_117 =
                ((value (*)(value, value)) prim_int63_lsl)
                ($y_115, $y_116);
              $y_118 = 3LLU;
              $prim_119 =
                ((value (*)(value, value)) prim_int63_lor)
                ($prim_117, $y_118);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_119;
              break;
            default:
              $p_120 = *((value *) $p_110 + 0LL);
              $args = (*$tinfo).args;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              /*skip*/;
              $y_121 =
                ((value (*)(struct thread_info *, value, value)) of_pos_rec_uncurried_known_105)
                ($tinfo, $p_120, $n_113);
              $alloc = (*$tinfo).alloc;
              $limit = (*$tinfo).limit;
              /*skip*/;
              $y_122 = 3LLU;
              $prim_123 =
                ((value (*)(value, value)) prim_int63_lsl)
                ($y_121, $y_122);
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $prim_123;
              break;
            
          }
        } else {
          switch ($p_110 >> 1LL) {
            default:
              $y_124 = 3LLU;
              (*$tinfo).alloc = $alloc;
              (*$tinfo).limit = $limit;
              return $y_124;
              break;
            
          }
        }
        break;
      
    }
  } else {
    switch ($n_111 >> 1LL) {
      default:
        $y_112 = 1LLU;
        (*$tinfo).alloc = $alloc;
        (*$tinfo).limit = $limit;
        return $y_112;
        break;
      
    }
  }
}

value generate_byte_to_uint_fun(struct thread_info *$tinfo)
{
  struct stack_frame frame;
  value root[0];
  register value $y_145;
  register value $y_146;
  register value $y_147;
  register value $y_148;
  register value $y_149;
  register value $y_150;
  register value $y_151;
  register value $y_152;
  register value $y_153;
  register value $y_154;
  register value $y_155;
  register value $y_156;
  register value $y_157;
  register value $y_158;
  register value $y_159;
  register value $y_160;
  register value $y_161;
  register value $y_162;
  register value $y_163;
  register value $y_164;
  register value $y_165;
  register value $y_166;
  register value $y_167;
  register value $y_168;
  register value $y_169;
  register value $y_170;
  register value $y_171;
  register value $y_172;
  register value $y_173;
  register value $y_174;
  register value $y_175;
  register value $y_176;
  register value $y_177;
  register value $y_178;
  register value $y_179;
  register value $y_180;
  register value $y_181;
  register value $y_182;
  register value $y_183;
  register value $y_184;
  register value $y_185;
  register value $y_186;
  register value $y_187;
  register value $y_188;
  register value $y_189;
  register value $y_190;
  register value $y_191;
  register value $y_192;
  register value $y_193;
  register value $y_194;
  register value $y_195;
  register value $y_196;
  register value $y_197;
  register value $y_198;
  register value $y_199;
  register value $y_200;
  register value $y_201;
  register value $y_202;
  register value $y_203;
  register value $y_204;
  register value $y_205;
  register value $y_206;
  register value $y_207;
  register value $CoqdNumbersdCyclicdInt63dUint63dsize_208;
  register value $env_209;
  register value $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210;
  register value *$alloc;
  register value *$limit;
  register value *$args;
  $alloc = (*$tinfo).alloc;
  $limit = (*$tinfo).limit;
  $args = (*$tinfo).args;
  frame.next = root;
  frame.root = root;
  frame.prev = (*$tinfo).fp;
  if (!(131LL <= $limit - $alloc)) {
    /*skip*/;
    (*$tinfo).nalloc = 131LL;
    garbage_collect($tinfo);
    /*skip*/;
    $alloc = (*$tinfo).alloc;
    $limit = (*$tinfo).limit;
  }
  $y_145 = 1LL;
  $y_146 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_146 + -1LL) = 1024LL;
  *((value *) $y_146 + 0LL) = $y_145;
  $y_147 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_147 + -1LL) = 1024LL;
  *((value *) $y_147 + 0LL) = $y_146;
  $y_148 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_148 + -1LL) = 1024LL;
  *((value *) $y_148 + 0LL) = $y_147;
  $y_149 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_149 + -1LL) = 1024LL;
  *((value *) $y_149 + 0LL) = $y_148;
  $y_150 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_150 + -1LL) = 1024LL;
  *((value *) $y_150 + 0LL) = $y_149;
  $y_151 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_151 + -1LL) = 1024LL;
  *((value *) $y_151 + 0LL) = $y_150;
  $y_152 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_152 + -1LL) = 1024LL;
  *((value *) $y_152 + 0LL) = $y_151;
  $y_153 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_153 + -1LL) = 1024LL;
  *((value *) $y_153 + 0LL) = $y_152;
  $y_154 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_154 + -1LL) = 1024LL;
  *((value *) $y_154 + 0LL) = $y_153;
  $y_155 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_155 + -1LL) = 1024LL;
  *((value *) $y_155 + 0LL) = $y_154;
  $y_156 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_156 + -1LL) = 1024LL;
  *((value *) $y_156 + 0LL) = $y_155;
  $y_157 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_157 + -1LL) = 1024LL;
  *((value *) $y_157 + 0LL) = $y_156;
  $y_158 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_158 + -1LL) = 1024LL;
  *((value *) $y_158 + 0LL) = $y_157;
  $y_159 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_159 + -1LL) = 1024LL;
  *((value *) $y_159 + 0LL) = $y_158;
  $y_160 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_160 + -1LL) = 1024LL;
  *((value *) $y_160 + 0LL) = $y_159;
  $y_161 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_161 + -1LL) = 1024LL;
  *((value *) $y_161 + 0LL) = $y_160;
  $y_162 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_162 + -1LL) = 1024LL;
  *((value *) $y_162 + 0LL) = $y_161;
  $y_163 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_163 + -1LL) = 1024LL;
  *((value *) $y_163 + 0LL) = $y_162;
  $y_164 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_164 + -1LL) = 1024LL;
  *((value *) $y_164 + 0LL) = $y_163;
  $y_165 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_165 + -1LL) = 1024LL;
  *((value *) $y_165 + 0LL) = $y_164;
  $y_166 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_166 + -1LL) = 1024LL;
  *((value *) $y_166 + 0LL) = $y_165;
  $y_167 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_167 + -1LL) = 1024LL;
  *((value *) $y_167 + 0LL) = $y_166;
  $y_168 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_168 + -1LL) = 1024LL;
  *((value *) $y_168 + 0LL) = $y_167;
  $y_169 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_169 + -1LL) = 1024LL;
  *((value *) $y_169 + 0LL) = $y_168;
  $y_170 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_170 + -1LL) = 1024LL;
  *((value *) $y_170 + 0LL) = $y_169;
  $y_171 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_171 + -1LL) = 1024LL;
  *((value *) $y_171 + 0LL) = $y_170;
  $y_172 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_172 + -1LL) = 1024LL;
  *((value *) $y_172 + 0LL) = $y_171;
  $y_173 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_173 + -1LL) = 1024LL;
  *((value *) $y_173 + 0LL) = $y_172;
  $y_174 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_174 + -1LL) = 1024LL;
  *((value *) $y_174 + 0LL) = $y_173;
  $y_175 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_175 + -1LL) = 1024LL;
  *((value *) $y_175 + 0LL) = $y_174;
  $y_176 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_176 + -1LL) = 1024LL;
  *((value *) $y_176 + 0LL) = $y_175;
  $y_177 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_177 + -1LL) = 1024LL;
  *((value *) $y_177 + 0LL) = $y_176;
  $y_178 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_178 + -1LL) = 1024LL;
  *((value *) $y_178 + 0LL) = $y_177;
  $y_179 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_179 + -1LL) = 1024LL;
  *((value *) $y_179 + 0LL) = $y_178;
  $y_180 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_180 + -1LL) = 1024LL;
  *((value *) $y_180 + 0LL) = $y_179;
  $y_181 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_181 + -1LL) = 1024LL;
  *((value *) $y_181 + 0LL) = $y_180;
  $y_182 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_182 + -1LL) = 1024LL;
  *((value *) $y_182 + 0LL) = $y_181;
  $y_183 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_183 + -1LL) = 1024LL;
  *((value *) $y_183 + 0LL) = $y_182;
  $y_184 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_184 + -1LL) = 1024LL;
  *((value *) $y_184 + 0LL) = $y_183;
  $y_185 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_185 + -1LL) = 1024LL;
  *((value *) $y_185 + 0LL) = $y_184;
  $y_186 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_186 + -1LL) = 1024LL;
  *((value *) $y_186 + 0LL) = $y_185;
  $y_187 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_187 + -1LL) = 1024LL;
  *((value *) $y_187 + 0LL) = $y_186;
  $y_188 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_188 + -1LL) = 1024LL;
  *((value *) $y_188 + 0LL) = $y_187;
  $y_189 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_189 + -1LL) = 1024LL;
  *((value *) $y_189 + 0LL) = $y_188;
  $y_190 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_190 + -1LL) = 1024LL;
  *((value *) $y_190 + 0LL) = $y_189;
  $y_191 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_191 + -1LL) = 1024LL;
  *((value *) $y_191 + 0LL) = $y_190;
  $y_192 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_192 + -1LL) = 1024LL;
  *((value *) $y_192 + 0LL) = $y_191;
  $y_193 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_193 + -1LL) = 1024LL;
  *((value *) $y_193 + 0LL) = $y_192;
  $y_194 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_194 + -1LL) = 1024LL;
  *((value *) $y_194 + 0LL) = $y_193;
  $y_195 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_195 + -1LL) = 1024LL;
  *((value *) $y_195 + 0LL) = $y_194;
  $y_196 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_196 + -1LL) = 1024LL;
  *((value *) $y_196 + 0LL) = $y_195;
  $y_197 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_197 + -1LL) = 1024LL;
  *((value *) $y_197 + 0LL) = $y_196;
  $y_198 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_198 + -1LL) = 1024LL;
  *((value *) $y_198 + 0LL) = $y_197;
  $y_199 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_199 + -1LL) = 1024LL;
  *((value *) $y_199 + 0LL) = $y_198;
  $y_200 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_200 + -1LL) = 1024LL;
  *((value *) $y_200 + 0LL) = $y_199;
  $y_201 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_201 + -1LL) = 1024LL;
  *((value *) $y_201 + 0LL) = $y_200;
  $y_202 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_202 + -1LL) = 1024LL;
  *((value *) $y_202 + 0LL) = $y_201;
  $y_203 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_203 + -1LL) = 1024LL;
  *((value *) $y_203 + 0LL) = $y_202;
  $y_204 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_204 + -1LL) = 1024LL;
  *((value *) $y_204 + 0LL) = $y_203;
  $y_205 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_205 + -1LL) = 1024LL;
  *((value *) $y_205 + 0LL) = $y_204;
  $y_206 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_206 + -1LL) = 1024LL;
  *((value *) $y_206 + 0LL) = $y_205;
  $y_207 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $y_207 + -1LL) = 1024LL;
  *((value *) $y_207 + 0LL) = $y_206;
  $CoqdNumbersdCyclicdInt63dUint63dsize_208 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $CoqdNumbersdCyclicdInt63dUint63dsize_208 + -1LL) = 1024LL;
  *((value *) $CoqdNumbersdCyclicdInt63dUint63dsize_208 + 0LL) = $y_207;
  $env_209 = (value) ($alloc + 1LL);
  $alloc = $alloc + 2LL;
  *((value *) $env_209 + -1LL) = 1024LL;
  *((value *) $env_209 + 0LL) = $CoqdNumbersdCyclicdInt63dUint63dsize_208;
  $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210 =
    (value) ($alloc + 1LL);
  $alloc = $alloc + 3LL;
  *((value *) $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210
     + -1LL) =
    2048LL;
  *((value *) $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210
     + 0LL) =
    CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_108;
  *((value *) $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210
     + 1LL) =
    $env_209;
  (*$tinfo).alloc = $alloc;
  (*$tinfo).limit = $limit;
  return $CertiCoqdBenchmarksdtestsdbyte_to_uint63_wrapper_clo_210;
}


#endif /* CERTICOQ_BENCHMARKS_TESTS_BYTE_TO_UINT63_C */
