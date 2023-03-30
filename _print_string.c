/*
 * File: _print_string.c
 * Auth: Lecueyer Gaetan
 */
#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * print_string - Prints a string.  
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
int _print_string(va_list arg)
{
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
