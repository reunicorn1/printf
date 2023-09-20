#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * recursive_int - prints the integer
 * @n: the number to be printed
 *
 * Return: number of numbers printed
 */
int recursive_int(int n)
{
	int n1;
	int count = 0;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
		count++;
	}
	else
		n1 = n;
	count++;
	if (n1 / 10)
	{
		count = count + recursive_int(n1 / 10);
	}
	putchar('0' + (n1 % 10));
	return (count);

}
/**
 * _printfint - handles the cases of %d, %i specifiers
 * @args: The specific argument
 *
 * Return: number of integers printed
 */

int _printfint(va_list args)
{
	int d, sum;

	d = va_arg(args, int);
	if (d == INT_MIN)
	{
		fputs("-2147483648", stdout);
		return (11);
	}
	sum = recursive_int(d);
	return (sum);
}
