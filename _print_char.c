/*
 * File: _print_char.c
 * Auth: Lecueyer Gaetan
 *       Marc Pourias
 *       Chaherdine Abdou
 */

#include <stdarg.h>
#include "main.h"

/**
 * _print_char - Prints a char.
 * @arg: letter to print
 * Return: 1 - lenght of one caracter
 */
int _print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	_putchar(letter);
	return (1);
}
