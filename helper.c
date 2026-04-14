#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */
int print_char(char c)
{
    return (_putchar(c));
}

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *str)
{
    int i;

    if (str == NULL)
        str = "(null)";

    i = 0;
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    return (i);
}
