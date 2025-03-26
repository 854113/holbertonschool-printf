#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Character string with zero or more directives
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[8])
			{
				case 'c':
					count += print_char(args);
					break;

				case 's':
					count += print_string(args);
					break;

				case '%':
					count += _putchar('%');
					break;
				default:

					count += _putchar('%');
					count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);

	return (count);
}
