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
    unsigned long j, m;
    void *ptr;
    void *addr;

    ptr = &j;
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
    len = _printf("%S\n", "Best\x1BSchool");
    _printf("Len:[%d]\n", len);
    m = (unsigned long)ptr;
    printf("%lu\n", m);
    _printf("%p\n", &m);
    len = printf("%p\n", (void *)&m);
    printf("len:[%d]\n", len);
    addr = (void *)0x7ffe637541f0;
    len = _printf("Address:[%p]\n", addr);
    _printf("Len:[%d]\n", len);
    len = printf("Address:[%p]\n", addr);
    printf("Len:[%d]\n", len);
    return (0);
}
