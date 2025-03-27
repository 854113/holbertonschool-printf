#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format_handler - Structure for format specifier handling
 * @specifier: Format specifier character
 * @handler: Function pointer to handle the specifier
 */
typedef struct format_handler
{
	char specifier;
	int (*handler)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_pointer(va_list args);
int _putchar(char c);
int print_number(long int n, int base, char *digits);

#endif /* MAIN_H */
