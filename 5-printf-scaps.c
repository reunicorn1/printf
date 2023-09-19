#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
  * putcharhexmod - prints numbers from 0 - 15 in hex 
  * @num: the number to be printed
  *
  * Return: nothing
  */

void putcharhexmod(int num)
{
	if (num < 10)
	{
		putchar('0' + num);
	}
	if (num > 9)
	{
		putchar('A' + (num % 10));
	}
}


