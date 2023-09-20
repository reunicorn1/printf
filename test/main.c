#include <limits.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    long int res = (long int)INT_MAX * 2;

    /*int len2;
    unsigned int ui;


    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");*/
    
    len = _printf("%b", INT_MIN);
    _printf("len: [%d]\n", len);
    len = _printf("%b", res);
    _printf("len: [%d]\n", len);
    len = _printf("%b", 2147483647);
    _printf("len: [%d]\n", len);
    len = _printf("%b", 1024);
    _printf("len: [%d]\n", len);
    len = _printf("%b", -1024);
    _printf("len: [%d]\n", len);
    len = _printf("%b", 0);
    _printf("len: [%d]\n", len);
    len = _printf("%b", UINT_MAX);
    _printf("len: [%d]\n", len);

    return (0);
}
