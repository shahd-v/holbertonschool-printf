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
	{
		str = "(null)";
	}
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
	unsigned int num;

	count = 0;
	if (n < 0)
	{
		_putchar('-');
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
	_putchar("0123456789"[num % 10]);
	count++;
	return (count);
}
/**
 * print_binary - converts unsigned int to binary and prints it
 * @n: the unsigned integer to convert
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
	int count;

	count = 0;
	if (n / 2 != 0)
		count += print_binary(n / 2);
	_putchar('0' + (n % 2));
	count++;
	return (count);
}
/**
 * print_unsigned - prints an unsigned integer
 * @n: the unsigned integer to print
 *
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int count;

	count = 0;
	if (n / 10 != 0)
		count += print_unsigned(n / 10);
	_putchar('0' + (n % 10));
	count++;
	return (count);
}

/**
 * print_octal - prints an unsigned integer in octal
 * @n: the unsigned integer to convert
 *
 * Return: number of characters printed
 */
int print_octal(unsigned int n)
{
	int count;

	count = 0;
	if (n / 8 != 0)
		count += print_octal(n / 8);
	_putchar('0' + (n % 8));
	count++;
	return (count);
}

/**
 * print_hex - prints an unsigned integer in lowercase hexadecimal
 * @n: the unsigned integer to convert
 *
 * Return: number of characters printed
 */
int print_hex(unsigned int n)
{
	int count;

	count = 0;
	if (n / 16 != 0)
		count += print_hex(n / 16);
	_putchar("0123456789abcdef"[n % 16]);
	count++;
	return (count);
}

/**
 * print_HEX - prints an unsigned integer in uppercase hexadecimal
 * @n: the unsigned integer to convert
 *
 * Return: number of characters printed
 */
int print_HEX(unsigned int n)
{
	int count;

	count = 0;
	if (n / 16 != 0)
		count += print_HEX(n / 16);
	_putchar("0123456789ABCDEF"[n % 16]);
	count++;
	return (count);
}
