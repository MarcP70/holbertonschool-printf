
/*
 * File: _print_char.c
 * Auth: Lecueyer Gaetan
 */
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a char.
 * @arg: letter to print
 */
int _print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	_putchar(letter);
	return (1);
}
