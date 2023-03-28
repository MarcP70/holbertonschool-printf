#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);

print_t forma[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"u", print_unsigned},
	{"o", print_octal},
	{NULL, NULL}
};

#endif
