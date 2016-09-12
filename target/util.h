#ifndef ELVM_UTIL_H_
#define ELVM_UTIL_H_

#include <ir/ir.h>

char* format(const char* fmt, ...);

__attribute__((noreturn))
void error(const char* fmt, ...);

void inc_indent();
void dec_indent();
void emit_line(const char* fmt, ...);

const char** reg_names;
const char* value_str(Value* v);
const char* src_str(Inst* inst);
const char* cmp_str(Inst* inst, const char* true_str);

int emit_cnt();
void emit_reset();
void emit_start();
void emit_1(int a);
void emit_2(int a, int b);
void emit_3(int a, int b, int c);
void emit_4(int a, int b, int c, int d);
void emit_5(int a, int b, int c, int d, int e);
void emit_6(int a, int b, int c, int d, int e, int f);
void emit_le(int a);

#endif  // ELVM_UTIL_H_