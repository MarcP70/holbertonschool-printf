#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth:  Gaetan-Lecuyer
 * Desc: Header file containing prototypes for all functions
 */

int _putchar(char c);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_int(va_list arg);

/**
 * <stdarg> is a arguments library
 * struct printer - A new struct type defining assiotiation forma specifer.
 * @symbol: A symbol representing a data type.
 * @fonction: the associated 
 * @printer_t: alias of the structure 
 */

#include <stdarg.h>

typedef struct printer
{
	char *symbol;
	int (*function)(va_list arg);
} printer_t;

#endif
