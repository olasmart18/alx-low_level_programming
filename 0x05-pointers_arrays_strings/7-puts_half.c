#include "main.h"

/**
 * put_half - function prints half of string
 * @str: the string passed in
 * Return: half of the string
 */

void puts_half(char *str)
 {
    int i, len;
    for (len = 0; str[len] != '\0'; ++len)
        ;
    if (len % 2 == 0)
    {
        for (i = len / 2; str[i] != '\0'; ++i)
        _putchar(str[i]);
    }
    else
    {
        for (i = ((len - 1) / 2) + 1; str[i] != '\0'; ++i)
        _putchar(str[i]);
    }
    _putchar('\n');
 }