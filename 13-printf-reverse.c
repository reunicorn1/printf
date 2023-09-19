#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printfreverse - prints the reversed string
 * @args: the specific argument to be processed
 *
 * Return: the number of chars printed
 */

int _printfreverse(va_list args)
{
	int i, count = 0;
	char *str;

	str = va_arg(args, char *);
	/* first try */
	if (str == NULL)
	{
		fputs("(llun)", stdout);
		return (strlen("(llun)"));
	}
	for ((i = (int)strlen(str) - 1); i >= 0; i--)
	{
		putchar(str[i]);
		count++;
	}
	return (count);
}
