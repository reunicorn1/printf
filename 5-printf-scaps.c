#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
  * putcharhexmod - prints numbers from 0 - 15 in hex 
  * @num: the number to be printed
  *
  * Return: nothing
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
  * _printfhexmod - prints a name as is
  * @num: the unsigned int which comes from the argument list
  *
  * Return: the sum of letters printed
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
  * _printfscap - prints string with a catch
  * @args: the string argument to be taken
  * 
  * Return: numbers of characters printed
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
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] >= 127)
		{
			fputs("\\x", stdout);
			if ((unsigned char)str[i] < 16)
				putchar('0');
			_printfhexmod((unsigned char)str[i]);
			count += 4;
			continue;
		}








