#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * func_gen - function generator to the corresponding specifier
 * @format: the format string which determines argument processing
 * @index: the array index where % is found
 *
 * Return: the function to use or NULL
 */

int (*func_gen(const char *format, int index))(va_list)
{
	int i, j;
	char flags[] = {' ', '+', '#'};
	print_fun f[] = {
		{"%s", _printfstring}, {"%c", _printfchar}, {"%i", _printfint},
		{"%d", _printfint}, {"%b", _printfbin}, {"%x", _printfhex_lower},
		{"%X", _printfhex_upper}, {"%o", _printfoct}, {"%u", _printfunint},
		{"%S", _printfscap}, {"%p", _printfpointer}, {"%r", _printfreverse},
		{"%R", _printfrot13}
	};

	for (j = 0; j < 13; j++)
	{
		if (format[index] == f[j].form[1])
			return (f[j].f);
	}
	for (i = 0; i < 3; i++)
	{
		if (format[index] == flags[i])
			return (flag_fun(format, index));
	}
	return (NULL);
}

/**
 * flag_fun - function generator to the corresponding flag
 * @format: is a pointer to the string determining argument processing
 * @index: the array index where % is found
 *
 * Return: the function to use or NULL
 */

int (*flag_fun(const char *format, int index))(va_list)
{
	switch (format[index])
	{
		case '#':
			if (format[index + 1] == 'X')
				return (_printfhex_upper_flag);
			else if (format[index + 1] == 'x')
				return (_printfhex_lower_flag);
			else if (format[index + 1] == 'o')
				return (_printfoct_flag);
			else
				return (NULL);
		case '+':
			if (format[index + 1] == 'i' || format[index + 1] == 'd')
				return (_printfint_flag1);
			else
				return (NULL);
		case ' ':
			if (format[index + 1] == '+' && (format[index + 2] == 'd'
					|| format[index + 2] == 'i'))
				return (_printfint_flag1);
			else if (format[index + 1] == 'i' || format[index + 1] == 'd')
				return (_printfint_flag2);
			else
				return (NULL);
		default:
			return (NULL);

	}
}

/**
 * space_checker - checks spacing
 * @format: the argument
 * @i: index
 *
 * Return: index
 */

int space_checker(const char *format, int i)
{
	int j, index, flag = 0;
	char flags[] = {'d', 'i', 'o', 'x', 'X'};

	for (j = 0; j < 5; j++)
	{
		if (format[i + 2] == flags[j])
		{
			index = 2;
			flag = 1;
		}
	}
	if (flag != 1 && format[i + 2] == '+' && (format[i + 3] == 'd'
				|| format[i + 3] == 'i'))
	{
		index = 3;
		flag = 1;
	}
	if (flag != 1)
		index = 1;
	return (index);
}
