#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printing_oct - prints the oct numbers and go in recurssion
 * @num: the unsigned int which comes from the argument list
 *
 * Return: the sum of letters printed.
 */

int _printing_oct(unsigned int num)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		count = count + _printing_oct(num / 8);
		putchar('0' + (num % 8));
	}
	return (count);
}

/**
 * _printfoct - handles the cases when the specifer is %o
 * @args: the specific argument from the list
 *
 * Return: the sum of letters printed
 */

int _printfoct(va_list args)
{
	unsigned int o;
	int sum;

	o = va_arg(args, unsigned int);
	if (o == 0)
	{
		putchar('0');
		return (1);
	}
	sum = _printing_oct(o);
	return (sum);
}
