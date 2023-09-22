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
	_printf("%lu - %lu = %lu\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	_printf("%ld\n", 1024L);
	_printf("%ld\n", -1024L);
	_printf("%ld\n", 0L);
	_printf("%ld\n", LONG_MAX);
	_printf("%ld\n", LONG_MIN);
	_printf("There is %ld bytes in %ld KB\n", 1024L, 1L);
	_printf("%ld - %ld = %ld\n", 1024L, 2048L, -1024L);
	_printf("%ld + %ld = %ld\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	_printf("%li\n", 1024L);
	_printf("%li\n", LONG_MAX);
	_printf("%li\n", LONG_MIN);
	_printf("%li - %li = %li\n", 1024L, 2048L, -1024L);
	_printf("%li + %li = %li\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	_printf("%lu\n", 0UL);
	_printf("%lu\n", ULONG_MAX);
	_printf("%lo\n", ULONG_MAX);
	_printf("%lo - %lo = %lo\n", ULONG_MAX, 2048UL, ULONG_MAX - 2048UL);
	_printf("%ho\n", 0);
	_printf("There is %ho bytes in %ho KB\n", 1024, 1);
	_printf("%ho - %ho = %ho\n", USHRT_MAX, 2048, USHRT_MAX - 2048);
}
