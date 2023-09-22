#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * length_mod - returns function according to length modifiers
 * @format: the format of the string that has to be taken as an argument
 * @index: the index of the arrray of the format to scan
 *
 * Return: the matching function
 */

int (*length_mod(const char *format, int index))(va_list)
{
	int i;
	print_fun shortfun[] = {
		{"i", _printfint_short}, {"d", _printfint_short}, {"u", _printfunint_short},
		{"x", _printfhex_lower_short}, {"X", _printfhex_upper_short},
			{"o", _printfoct_short}
	};
	print_fun longfun[] = {
		{"i", _printfint_long}, {"d", _printfint_long}, {"u", _printfunint_long},
		{"x", _printfhex_lower_long}, {"X", _printfhex_upper_long},
		{"o", _printfoct_long}
	};

	if (format[index] == 'h')
	{
		for (i = 0; i < 6; i++)
		{
			if (format[index + 1] == shortfun[i].form[0])
				return (shortfun[i].f);
		}
	}
	if (format[index] == 'l')
	{
		for (i = 0; i < 6; i++)
		{
			if (format[index + 1] == longfun[i].form[0])
				return (longfun[i].f);
		}
	}
	return (NULL);
}
