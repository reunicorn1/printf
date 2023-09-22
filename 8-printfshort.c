#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * _printfint_short - handles the cases of %d, %i buut short
 * @args: The specific argument
 *
 * Return: number of integers printed
 */

int _printfint_short(va_list args)
{
	short d;
	int sum;

	d = va_arg(args, int);
	if (d == SHRT_MIN)
	{
		fputs("-32768", stdout);
		return (6);
	}
	sum = recursive_int(d);
	return (sum);
}

/**
 * _printfunint_short - handles the cases of %u specifers but short
 * @args: The argument to work with
 *
 * Return: number of integers printed
 */

int _printfunint_short(va_list args)
{
	unsigned short ui;
	int sum;

	ui = va_arg(args, int);
	sum = recursive_unint(ui);
	return (sum);
}

/**
 * _printfhex_lower_short - prints the hexidecimal of a number in lower
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_lower_short(va_list args)
{
	unsigned short x;
	int sum;

	x = va_arg(args, int);
	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printfhex(x, 1);
	return (sum);
}

/**
 * _printfhex_upper_short - prints the hexidecimal in upper alpha but short
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_upper_short(va_list args)
{
	unsigned short x;
	int sum;

	x = va_arg(args, int);
	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printfhex(x, 2);
	return (sum);
}

/**
 * _printfoct_short - handles the cases when the specifer is %o
 * @args: the specific argument from the list
 *
 * Return: the sum of letters printed
 */

int _printfoct_short(va_list args)
{
	unsigned short o;
	int sum;

	o = va_arg(args, int);
	if (o == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printing_oct(o);
	return (sum);
}
