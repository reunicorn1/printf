#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _pow_recursion  - returns the valuue of x raised to the power of y
 * @x: is a variable of int type, consituting the base.
 * @y: is a variable of int type, constituting the power.
 *
 * Return: the answer
 */

long _pow_recursion(int x, int y)
{
	long sum;

	if (y == 0)
		return (1);
	y--;
	sum = x * _pow_recursion(x, y);
	return (sum);
}

/**
 * _printfbin_negative - handles the case when the argument is negative
 * @n: the negative number
 *
 * Return: the number of int printed
 */

int _printfbin_negative(long n)
{
	int i, sum;
	long num, pwr;

	sum = 0;
	num = -(n);
	for (i = 31; i >= 0; i++)
	{
		pwr = _pow_recursion(2, i);
		if (i == 0)
		{
			putchar('1');
			sum++;
			break;
		}
		if (num >= pwr)
		{
			putchar('0');
			num = pwr - num;
			sum++;
		}
		if (num < pwr)
		{
			putchar('1');
			sum++;
		}
	}
	return (sum);
}
/**
 * _printfbin - handles the case of the specifer &b
 * @args: the required argument
 *
 * Return: Nothing.
 */

int _printfbin(va_list args)
{
	long n, pwr, num;
	int i, j, flag, sum;

	n = va_arg(args, long);
	if (n < 0)
		return (_printfbin_negative(n));
	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	for (i = 0, sum = 0, pwr = 0, flag = 0; pwr < n; i++)
	{
		pwr = _pow_recursion(2, i);
			if (pwr >= n)
			{
				flag = 1;
				num = (pwr == n) ? (n - pwr) : (n - _pow_recursion(2, (i - 1)));
				putchar('1');
				sum++;
				for (j = (num == 0) ? i - 1 : i - 2; j >= 0; j--)
				{
					pwr = _pow_recursion(2, j);
					if (num < pwr)
					{
						putchar('0');
						sum++;
					}
					if (num >= pwr)
					{
						num = num - pwr;
						putchar('1');
						sum++;
					}
				}
			}
			if (flag == 1)
				break;
	}
	return (sum);
}
