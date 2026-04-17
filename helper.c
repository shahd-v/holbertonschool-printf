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

/**
 * print_int - print integer
 * @n: the integer to print
 *
 * Return: number of characters printed
 */

int print_int(int n)
{
	int count;
	insigned int num;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		count += print_int(num / 10);
	}
	write (1, &"0123456789"[num % 10], 1);
	count++;
	return (count);
}
