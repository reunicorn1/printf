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

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && (format[1] == '\0' || 
					(format[1] == ' ' && format[2] == '\0'))))
		return (-1);
	for (i = 0, sum = 0; format[i]; i++)




