#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * recursive_int - prints the integer
 * @n: the number to be printed
 * @count: the count of the loops
 *
 * Return: number of numbers printed
 */
int recursive_int(int n, int count)
{
	int n1;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
		count++;
	}
	else
		n1 = n;
	if (n1 / 10)
	{
		recursive_int(n1 / 10, count);
	}
	count++;
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
	sum = recursive_int(d, 0);
	return (sum);
}
