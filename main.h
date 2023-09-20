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

#endif
