#include <stdarg.h>
#include "main.h"

int _print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	_putchar(letter);
	return (1);
}
