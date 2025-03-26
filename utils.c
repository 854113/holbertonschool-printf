#include "main.h"


/**
 * _putchar - Writes a single character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints a character from variable arguments
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}


/**
 * print_string - Prints a string from variable arguments
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}
