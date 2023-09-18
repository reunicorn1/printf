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
static int recursive_int(int n)
{
	int n1;
	int count = 0;

	if (n == INT_MIN)
	{
		n1 = -(n + 1);
		putchar('-');
		count++;
	}
	else if (n < 0)
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
	static int recursive_int(int n);
	int d, sum;

	d = va_arg(args, int);
	sum = recursive_int(d);
	return (sum);
}
