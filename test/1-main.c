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
	int *ptr;

	len = printf("%p\n", (void *)ptr);
	printf("len: [%d]\n", len);
	len = _printf("%p\n", ptr);
	_printf("len: [%d]\n", len);
}
