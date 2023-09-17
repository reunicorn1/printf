#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
  * _printf - produces output according to a format
  * @format: pointer to conversion specifier
  *
  * Return: Numbers of characters printed
  */

int _printf(const char *format, ...)
{
	va_list myarg;
	int Num = 0;

	va_start(myarg, format);
	while (*format != '\0')
	{
		if (*format == '%' && (format[1] == 'c' || format[1] == 's' || format[1] == '%'))
		{
			if (*(format + 1) == 'c')
			{
				int nv = va_arg(myarg, int);

				Num = Num + printf("%c", nv);
			}
			else if (*(format + 1) == 's')
			{
				char *str = va_arg(myarg, char *);

				Num = Num + printf("%s", str);
			}
			else
			{
				Num = Num + printf("%%");
			}
			format += 2;
		}
		else
		{
			return (Num);
		}
	}
	va_end(myarg);
	return (Num);
}
