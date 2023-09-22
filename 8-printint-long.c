#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * recursive_int_long - prints the integer
 * @n: the number to be printed
 *
 * Return: number of numbers printed
 */
int recursive_int_long(long n)
{
	long n1;
	int count = 0;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
		count++;
	}
	else
		n1 = n;
	count++;
	if (n1 / 10)
	{
		count = count + recursive_int_long(n1 / 10);
	}
	putchar('0' + (n1 % 10));
	return (count);

}
/**
 * _printfint_long - handles the cases of %d, %i specifiers
 * @args: The specific argument
 *
 * Return: number of integers printed
 */

int _printfint_long(va_list args)
{
	long d;
	int sum;

	d = va_arg(args, long);
	if (d == LONG_MIN)
	{
		fputs("-9223372036854775808", stdout);
		return (20);
	}
	sum = recursive_int_long(d);
	return (sum);
}

/**
 * recursive_unint_long - prints the unsigned int
 * @n: the number to be printed
 *
 * Return: number of integers printed
 */

int recursive_unint_long(unsigned long n)
{
	int count = 0;

	count++;
	if (n / 10)
	{
		count = count + recursive_unint_long(n / 10);
	}
	putchar('0' + (n % 10));
	return (count);
}

/**
 * _printfunint_long - handles the cases of %u specifers
 * @args: The argument to work with
 *
 * Return: number of integers printed
 */

int _printfunint_long(va_list args)
{
	unsigned long ui;
	int sum;

	ui = va_arg(args, unsigned long);
	sum = recursive_unint_long(ui);
	return (sum);
}
