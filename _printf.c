#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * _printf - takes a formatted string as input to produce output.
 * @format: formatted string, may or may not have placeholders.
 *
 * Return: returns the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, flag, sum;
	va_list arg;
	int (*ptr)(va_list);

