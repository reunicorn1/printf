#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_fun - Struct print_fun
 *
 * @format: The specifier format
 * @fun: The function associated
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
int _printfbin(va_list args);
int _pow_recursion(unsigned int x, unsigned int y);

#endif
