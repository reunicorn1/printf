#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * putcharhex - prints numbers from 0 - 15 in hex
 * @num: the number to be printed
 * @option: decides if the letter should be written in upper or lower case
 *
 * Return: nothing
 */

void putcharhex(unsigned int num, int option)
{
	if (num < 10)
		putchar('0' + num);
	if (num > 9)
	{
		if (option == 1)
			putchar('a' + (num % 10));
		if (option == 2)
			putchar('A' + (num % 10));
	}
}

/**
 * _printfhex - prints a name as is
 * @num: the unsigned int which comes from the argument list
 * @option: decides if it's coming to produce upper or lower alpha
 *
 * Return: the sum of letters printed
 */

int _printfhex(unsigned int num, int option)
{
	int count = 0;

	if (num > 0)
	{
		count++;
		count = count + _printfhex(num / 16, option);
		putcharhex(num % 16, option);
	}
	return (count);
}

/**
 * _printfhex_lower - prints the hexidecimal of a number in lower alpha
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_lower(va_list args)
{
	unsigned int x;
	int sum;

	x = va_arg(args, unsigned int);
	sum = _printfhex(x, 1);
	return (sum);

}

/**
 * _printfhex_upper - prints the hexidecimal of a number in lower alpha
 * @args: Thar argument to be processed
 *
 * Return: the number of letters printed
 */

int _printfhex_upper(va_list args)
{
	unsigned int x;
	int sum;

	x = va_arg(args, unsigned int);
	sum = _printfhex(x, 2);
	return (sum);
}
