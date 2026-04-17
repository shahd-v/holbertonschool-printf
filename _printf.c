#include "main.h"

/**
 * handle_specifier - handles conversion specifiers
 * @format: the format string
 * @i: current position in format string
 * @args: va_list of arguments
 *
 * Return: number of characters printed
 */
int handle_specifier(const char *format, int i, va_list args)
{
	count = 0;
	if (format[i + 1] == 'c')
		count += print_char(va_arg(args, int));
	else if (format[i + 1] == 's')
		count += print_string(va_arg(args, char *));
	else if (format[i + 1] == '%')
		count += print_char('%');
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		count += print_int(va_arg(args, int));
	return (count);
}

/**
 * _printf - print output
 * @format: string contain text
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count;
	va_list args;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}

		else if (format[i] == '%')
		{
			count += handle_specifier(format, i, args);
			i += 2;

		}

	}
	va_end(args);
	return (count);


}
