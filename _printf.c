#include "main.h"

/**
 * handle_format_specifier - Handles individual format specifiers
 * @specifier: The format specifier character
 * @args: Variable argument list
 * @count: Pointer to count of printed characters
 *
 * Return: Number of characters added to count
 */

int handle_format_specifier(char specifier, va_list args, int *count)
{
	int added = 0;

	switch (specifier)
	{
		case 'c':
			added = print_char(args);
			break;
		case 's':
			added = print_string(args);
			break;
		case '%':
			added = _putchar('%');
			break;
		default:
			added = _putchar('%');
			added += _putchar(specifier);
			break;
	}

	*count += added;
	return (added);
}

/**
 * _printf - Produces output according to a format
 * @format: Character string with zero or more directives
 *
 * Return: Number of characters printed (excluding null byte)
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
			handle_format_specifier(format[i], args, &count);
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
