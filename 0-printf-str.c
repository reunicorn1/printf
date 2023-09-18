#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printfstring - handles the cases of %s specifier
 * @args: the argument used
 *
 * Return: length of the string
 */

int _printfstring(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		fputs("(null)", stdout);
		return (strlen("(null)"));
	}
	fputs(s, stdout);
	return (strlen(s));
}

/**
 * _printfchar - handles the cases of the %, and %c sepecifiers.
 * @args: The argument used
 *
 * Return: 1
 */

int _printfchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
	return (1);
}
