#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * _printfhex_ul - prints numbers as hex but with unsigned long type
 * @num: the unsigned long which represent the address
 * @option: the optionn of upper caps or lower
 *
 * Return: the sum of the letters printed
 */

int _printfhex_ul(unsigned long num, int option)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		count = count + _printfhex_ul(num / 16, option);
		putcharhex(num % 16, option);
	}
	return (count);
}

/**
 * _printfpointer - prints the address as a hex number
 * @args: the argument to be taken
 *
 * Return: the number of int printed
 */

int _printfpointer(va_list args)
{
	unsigned long ul;
	int sum;

	ul = va_arg(args, unsigned long);
	if (ul == 0)
	{
		fputs("(nil)", stdout);
		return (strlen("(nil)"));
	}
	fputs("0x", stdout);
	sum = 2;
	sum += _printfhex_ul(ul, 1);
	return (sum);
}
