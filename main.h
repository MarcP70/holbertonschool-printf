#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_int(va_list arg);

typedef struct printer
{
	char *symbol;
	int (*function)(va_list arg);
} printer_t;

#endif
