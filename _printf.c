/*
 * File: _print_char.c
 * Auth: Lecueyer Gaetan
 *       Marc Pourias
 *       Chaherdine Abdou
 */

/**
 * _printf - Prints anything passed to the function
 * @format: the list of types of arguments passed to the function
 * Return: the lenght of the format + the lenght of any arguments
 */
#include <stddef.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{

	int len_format = 0;
	va_list args;

	if (format == NULL)
		return (-1);


	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				len_format += _print_char(args);
				break;
			case 's':
				len_format += _print_string(args);
				break;
			case 'd':
			case 'i':
				len_format += _print_int(args);
				break;
			case '%':
				len_format += _putchar('%');
				break;
			default:
				len_format += _putchar('%') + _putchar(*format);
				break;
			}
		}
		else
			len_format += _putchar(*format);
		format++;
	}
	va_end(args);
	return (len_format);
}
