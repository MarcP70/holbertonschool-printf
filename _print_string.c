#include <stdarg.h>
#include "main.h"

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
