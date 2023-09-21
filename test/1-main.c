#include <limits.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	_printf("%+d\n", 1024);
	_printf("%+d\n", -1024);
	_printf("%+d\n", 0);
	_printf("%+d\n", INT_MAX);
	_printf("%+d\n", INT_MIN);
	_printf("There is %+d bytes in %+d KB\n", 1024, 1);
	_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	_printf("% d\n", 1024);
	_printf("% d\n", -1024);
	_printf("% d\n", 0);
	_printf("% i\n", INT_MIN);
	_printf("%#o\n", 1024);
	_printf("%#x\n", 0);
	_printf("%#o\n", 0);
	_printf("%#o\n", UINT_MAX);
	_printf("%#x\n", UINT_MAX);
	_printf("% \n");
	_printf("% % % % \n");
	_printf("%d", INT_MIN);
	return (0);
}
