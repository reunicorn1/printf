#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	_printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	return (0);
}
