#include "main.h"

/**
 * handle_format - Handles format specifier processing
 * @format: Current format character
 * @args: Variable argument list
 * @count: Pointer to character count
 *
 * Return: 1 if processed successfully, -1 if error
 */
static int handle_format(char format, va_list args, int *count)
{
	switch (format)
	{
		case 'c':
			*count += print_char(args);
			return (1);
		case 's':
			*count += print_string(args);
			return (1);
		case '%':
			*count += _putchar('%');
			return (1);
		default:
			*count += _putchar('%');
			*count += _putchar(format);
			return (1);
	}
}

/**
 * _printf - Produces output according to a format
 * @format: Character string with zero or more directives
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			handle_format(format[i], args, &count);
		}
		else
			count += _putchar(format[i]);
		i++;
	}

	va_end(args);
	return (count);
}
