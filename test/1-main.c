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
	int len;

	len = printf("%p\n", NULL);
	printf("len: [%d]\n", len);
	len = _printf("%p\n", NULL);
	_printf("len: [%d]\n", len);

	return (0);
}
