#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
#include <limits.h>

/**
 * _printfhex_upper_flag - prints the hexidecimal of a number in lower alpha
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_upper_flag(va_list args)
{
	unsigned int x;
	int sum;

	x = va_arg(args, unsigned int);
	if (x == 0)
	{
		fputs("00", stdout);
		return (2);
	}
	fputs("0X", stdout);
	sum = 2;
	sum += _printfhex(x, 2);
	return (sum);
}

/**
 * _printfhex_lower_flag - prints the hexidecimal of a number in lower alpha
 * @args: The argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_lower_flag(va_list args)
{
	unsigned int x;
	int sum;

	x = va_arg(args, unsigned int);
	sum = 2;
	if (x == 0)
	{
		fputs("00", stdout);
		return (2);
	}
	fputs("0x", stdout);
	sum = 2;
	sum += _printfhex(x, 1);
	return (sum);
}

/**
 * _printfoct_flag - handles the cases when the specifer is %o
 * @args: the specific argument from the list
 *
 * Return: the sum of letters printed
 */

int _printfoct_flag(va_list args)
{
	unsigned int o;
	int sum;

	o = va_arg(args, unsigned int);
	putchar('0');
	sum = 1;
	if (o == 0)
	{
		putchar('0');
		return (1 + sum);
	}
	sum += _printing_oct(o);
	return (sum);
}

/**
 * _printfint_flag1 - handles the cases of %d, %i specifiers
 * @args: The specific argument
 *
 * Return: number of integers printed
 */

int _printfint_flag1(va_list args)
{
	int d, sum = 0;

	d = va_arg(args, int);
	if (d == INT_MIN)
	{
		fputs("-2147483648", stdout);
		return (11);
	}
	if (d >= 0)
	{
		putchar('+');
		sum++;
	}
	sum += recursive_int(d);
	return (sum);
}

/**
 * _printfint_flag2 - handles the cases of %d, %i specifiers
 * @args: The specific argument
 *
 * Return: number of integers printed
 */

int _printfint_flag2(va_list args)
{
	int d, sum = 0;

	d = va_arg(args, int);
	if (d == INT_MIN)
	{
		fputs("-2147483648", stdout);
		return (11);
	}
	if (d >= 0)
	{
		putchar(' ');
		sum++;
	}
	sum += recursive_int(d);
	return (sum);
}
