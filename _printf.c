#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - takes a formatted string as input to produce output.
 * @format: formatted string, may or may not have placeholders.
 *
 * Return: returns the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, j, flag, sum;
	va_list arg;
	int (*ptr)(va_list);
	print_fun f[] = {
		{"%s", _printfstring}, {"%c", _printfchar}, {"%i", _printfint},
		{"%d", _printfint}, {"%b", _printfbin}
	};

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	sum = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			flag = 0;
			for (j = 0; j < 5; j++)
			{
				if (format[i] == f[j].form[0] && format[i + 1] == f[j].form[1])
				{
					ptr = f[j].f;
					sum += ptr(arg);
					i++;
					flag = 1;
					break;
				}
			}
			if (!flag)
			{
				putchar(format[i]);
				sum++;
			}
		}
		else
		{
			putchar(format[i]);
			sum++;
		}
	}
	va_end(arg);
	return (sum);
}
