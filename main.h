#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/* add prototypes here */
int _printf(const char *format, ...);
int _printfstring(va_list args);
int _printfchar(va_list args);
int _printfint(va_list args);


#endif
