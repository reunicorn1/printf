#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
  * putcharhexmod - 
  *
  *
  *
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


