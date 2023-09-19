#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printfrot13 - prints the rot13'ed string
 * @args: the specified argument to work with.
 *
 * Return: the number of charcters printed
 */

int _printfrot13(va_list args)
{
	int i, j, flag, count = 0;
	char *str;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		fputs("(ahyy)", stdout);
		return (strlen("(ahyy)"));
	}
	for (i = 0; i < (int)strlen(str); i++)
	{
		flag = 0;
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data[j])
			{
				putchar(code[j]);
				count++;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			continue;
		putchar(str[i]);
		count++;
	}
	return (count);
}
