#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printfhex_long - prints a name as is
 * @num: the unsigned int which comes from the argument list
 * @option: decides if it's coming to produce upper or lower alpha
 *
 * Return: the sum of letters printed
 */

int _printfhex_long(unsigned long num, int option)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		count = count + _printfhex_long(num / 16, option);
		putcharhex(num % 16, option);
	}
	return (count);
}

/**
 * _printfhex_lower_long - prints the hexidecimal of a number in lower alpha
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_lower_long(va_list args)
{
	unsigned long x;
	int sum;

	x = va_arg(args, unsigned long);
	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printfhex_long(x, 1);
	return (sum);
}

/**
 * _printfhex_upper_long - prints the hexidecimal of a number in lower alpha
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_upper_long(va_list args)
{
	unsigned long x;
	int sum;

	x = va_arg(args, unsigned long);
	if (x == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printfhex_long(x, 2);
	return (sum);
}

/**
 * _printing_oct_long - prints the oct numbers and go in recurssion
 * @num: the unsigned long which comes from the argument list
 *
 * Return: the sum of letters printed.
 */

int _printing_oct_long(unsigned long num)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		count = count + _printing_oct_long(num / 8);
		putchar('0' + (num % 8));
	}
	return (count);
}

/**
 * _printfoct_long - handles the cases when the specifer is %o
 * @args: the specific argument from the list
 *
 * Return: the sum of letters printed
 */

int _printfoct_long(va_list args)
{
	unsigned long o;
	int sum;

	o = va_arg(args, unsigned long);
	if (o == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printing_oct_long(o);
	return (sum);
}
