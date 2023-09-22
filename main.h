#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_fun - Struct print_fun
 *
 * @form: The specifier format
 * @f: The function associated
 */
typedef struct print_fun
{
	char *form;
	int (*f)(va_list args);
} print_fun;

/* add prototypes here */
int _printf(const char *format, ...);
int _printfstring(va_list args);
int _printfchar(va_list args);
int _printfint(va_list args);
int recursive_int(int n);
int _printfbin(va_list args);
long _pow_recursion(int x, int y);
int _printfhex_lower(va_list args);
int _printfhex_upper(va_list args);
void putcharhex(unsigned int num, int option);
int _printfhex(unsigned int num, int option);
int _printfoct(va_list args);
int _printing_oct(unsigned int num);
int recursive_unint(unsigned int n);
int _printfunint(va_list args);
int _printfscap(va_list args);
void _printfhexmod(int num);
void putcharhexmod(int num);
int _printfhex_ul(unsigned long num, int option);
int _printfpointer(va_list args);
int _printfreverse(va_list args);
int _printfrot13(va_list args);
int (*func_gen(const char *format, int index))(va_list);
int (*flag_fun(const char *format, int index))(va_list);
int _printfhex_upper_flag(va_list args);
int _printfhex_lower_flag(va_list args);
int _printfoct_flag(va_list args);
int _printfint_flag1(va_list args);
int _printfint_flag2(va_list args);
int space_checker(const char *format, int i);
int _printfint_short(va_list args);
int _printfunint_short(va_list args);
int _printfhex_lower_short(va_list args);
int _printfhex_upper_short(va_list args);
int _printfoct_short(va_list args);
int (*length_mod(const char *format, int index))(va_list);
int _printfint_long(va_list args);
int recursive_int_long(long n);
int _printfunint_long(va_list args);
int recursive_unint_long(unsigned long n);
int _printfhex_upper_long(va_list args);
int _printfhex_lower_long(va_list args);
int _printfhex_long(unsigned long num, int option);
int _printfoct_long(va_list args);
int _printing_oct_long(unsigned long num);

#endif
