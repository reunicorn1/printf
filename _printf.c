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
	{
		flag = 0;
		if (format[i] == '%' && format[i + 1] != '%')
		{
			ptr = func_gen(format, (i + 1));
			if (ptr != NULL)
			{
				sum += ptr(arg);
				i += space_checker(format, i);
				flag = 1;
			}
		}
		if (flag == 1)
			continue;
		if (format[i] == '%' && format[i + 1] == ' ' && format[i + 2] == '%')
			i += 2;
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		putchar(format[i]);
		if (format[i] == '%' && (format[i + 1] == 'h' || format[i + 1] == 'l'))
			i++;
		sum++;
	}
	va_end(arg);
	return (sum);
}
