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

int _pow_recursion(int x, int y)
{
	int sum;

	if (y < 0)
		return (-1);
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
	unsigned int n;
	int i, j, pwr, num, flag, sum;

	n = va_arg(args, int);
	sum = 0;
	pwr = 0;
	for (i = 0, flag = 0; pwr < (int)n; i++)
	{
		pwr = _pow_recursion(2, i);
			if (pwr > (int)n)
			{
				flag = 1;
				num = n - (_pow_recursion(2, (i - 1)));
				putchar('1');
				sum++;
				for (j = i - 2; j >= 0; j--)
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
