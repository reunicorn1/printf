#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * recursive_unint - prints the unsigned int
 * @n: the number to be printed
 *
 * Return: number of integers printed
 */

int recursive_unint(unsigned int n)
{
	int count = 0;

	count++;
	if (n / 10)
	{
		count = count + recursive_unint(n / 10);
	}
	putchar('0' + (n % 10));
	return (count);
}

/**
 * _printfunint - handles the cases of %u specifers
 * @args: The argument to work with
 *
 * Return: number of integers printed
 */

int _printfunint(va_list args)
{
	unsigned int ui;
	int sum;

	ui = va_arg(args, unsigned int);
	sum = recursive_unint(ui);
	return (sum);
}
