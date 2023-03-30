#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth:  Gaetan Lecuyer/Marc Pourias/Chaherdine Abdou
 * Desc: Header file containing prototypes for all functions
 */

/* Functions prototype */
int _putchar(char c);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_int(va_list arg);

/* Structures */
/**
 * <stdarg> is a arguments library
 * struct printer - A new struct type defining assiotiation forma specifer.
 * @symbol: the symbol representing a data type.
 * @fonction: the function associated
 * @printer_t: alias of the structure
 */

#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	int (*function)(va_list arg);
} printer_t;

#endif
