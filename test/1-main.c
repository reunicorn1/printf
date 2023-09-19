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
	_printf("%R\n", "Hello");
	_printf("%R\n", "Lorem ipsum dolor sit amet");
	_printf("%R\n", "");
	_printf("%R\n", " \t Test String\n");
	_printf("%R\n", "aaaaa");
	_printf("%R\n", "abc123!@#");
	_printf("%R\n", NULL);
	return (0);
}
