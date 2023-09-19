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

	_printf("%r\n", "Hello");
	_printf("%r\n", "Lorem ipsum dolor sit amet");
	_printf("%r\n", "");
	_printf("%r\n", " \t Test String\n");
	_printf("%r\n", "!@#$%^&*()");
	_printf("%r\n", "Café");
	_printf("%r\n", "\n\t\b");
	_printf("%r\n", NULL);
	return (0);
}
