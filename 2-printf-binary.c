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

int _pow_recursion(unsigned int x, unsigned int y)
{
	unsigned int sum;

	if (y == 0)
		return (1);
	y--;
	sum = x * _pow_recursion(x, y);
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
	unsigned int n, pwr;
	int i, j, num, flag, sum;

	n = va_arg(args, int);
	sum = 0;
	pwr = 0;
	for (i = 0, flag = 0; pwr < n; i++)
	{
		if (n == 4294967295)
			i = 32;
		pwr = _pow_recursion(2, i);
			if (pwr >= n || n == 4294967295)
			{
				flag = 1;
				num = (pwr == n) ? (n - pwr) : (n - _pow_recursion(2, (i - 1)));
				putchar('1');
				sum++;
				for (j = (num == 0) ? i - 1 : i - 2; j >= 0; j--)
				{
					pwr = _pow_recursion(2, j);
					if (num < (int) pwr)
					{
						putchar('0');
						sum++;
					}
					if (num >= (int)pwr)
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
