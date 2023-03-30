#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i, j, not_found;
	int len_format = 0;
	int nb_symbols = 4;
	va_list args;
	printer_t funcs[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int}
	};

	if (format)
	{
		while (format[len_format])
			len_format++;
		va_start(args, format);
		i = 0;
		while (*(format + i))
		{
			if (*(format + i) != '%')
			{
				_putchar(*(format + i));
				i++;
			} else
			{
				j = 0;
				not_found = 1;
				while (j < nb_symbols)
				{
					if (*(format + (i + 1)) == *(funcs[j].symbol))
					{
						len_format = (len_format - 2) + funcs[j].function(args);
						not_found = 0;
					}
					j++;
				}
				if (not_found == 1)
				{
					_putchar('%');
					len_format = len_format - 1;
				}
				i = i + 2;
			}
		}
		va_end(args);
		return (len_format);
	}
	return (0);
}
