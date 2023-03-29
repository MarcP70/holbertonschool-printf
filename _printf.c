 #include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

int print_float(va_list arg)
{
	float num;
	num = va_arg(arg, double);
	printf("%f", num);
  return (0);
}
int print_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	printf("%d", num);
  return(0);
}
int print_string(va_list arg)
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
int print_char(va_list arg)
{
  char letter;
  letter = va_arg(arg, int);
  _putchar(letter);
  return (1);
}
int _printf(const char *format, ...)
{
  int i, j;
  int len = 0;
  va_list args;
  printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_float},
		{"s", print_string}
	};
  if(format)
  {
    while (format[len])
      len++;
    va_start(args, format);
    i = 0;
	  while (*(format + i))
	  {
		  j = 0;
      if (*(format + i) == '%')
      {
  		  while (j < 4 && (*(format + (i + 1)) != *(funcs[j].symbol)))
  			  j++;
  		  if (j < 4)
  		  {
  			  len = (len -2) + funcs[j].function(args);
          i = i + 2;
  		  }
      }
      if (j != 4)
        _putchar(*(format + i));
      else
      {
        _putchar(format[i]);
        i = i + 1;
        len = len -1;
      }
		  i++;
	  }
	  va_end(args);
    return (len);
  }
  return (0);
}
