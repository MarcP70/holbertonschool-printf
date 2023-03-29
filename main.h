#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct printer
{
	char *symbol;
	int (*function)(va_list arg);
} printer_t;

#endif
