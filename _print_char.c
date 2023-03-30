/*
 * File: _print_char.c
 * Auth: Lecueyer Gaetan
 */
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a char.
 * @char: is the variable pointed to by the string
 * @arg: letter = arguments of int
 */
int _print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	_putchar(letter);
	return (1);
}
