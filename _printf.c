#include "main.h"

/**
 * _printf - print output
 * @format: string contain text
 *
 * Return: number of characters printed
 */

int _printf(const char *format , ...)
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

	while (format != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}

		if (format[i] == '%')
		{

		}

	}


}
