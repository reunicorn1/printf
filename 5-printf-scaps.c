#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * putcharhexmod - prints numbers from 0 - 15 in hex with a mod
 * @num: the number to be printed
 *
 * Return: Nothing.
 */

void putcharhexmod(int num)
{
	if (num < 10)
	{
		putchar('0' + num);
	}
	if (num > 9)
	{
		putchar('A' + (num % 10));
	}
}

/**
 * _printfhexmod - prints specific ascii values as hex
 * @num: the ascii values which comes from _printfscap func
 *
 * Return: nothing
 */

void _printfhexmod(int num)
{
	if (num > 0)
	{
		_printfhexmod(num / 16);
		putcharhexmod(num % 16);
	}
}

/**
 * _printfscap - prints strings with a catch.
 * @args: the string argument to be taken
 *
 * Return: the number of characters printed
 */

int _printfscap(va_list args)
{
	int i, count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		fputs("(null)", stdout);
		return (strlen("(null)"));
	}
	for (i = 0; i < (int)strlen(str); i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			fputs("/x", stdout);
			if (str[i] < 16)
				putchar('0');
			_printfhexmod(str[i]);
			count = count + 4;
			continue;
		}
		putchar(str[i]);
		count++;
	}
	return (count);
}
