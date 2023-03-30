/*
 * File: _print_int.c
 * Auth: Lecueyer Gaetan
 *       Marc Pourias
 *       Chaherdine Abdou
 */

#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _print_int - Print integer number
 * @arg: number to print
 * Return: lenght of the number
 */
int _print_int(va_list arg)
{
	int j, num, number;
	int i = 0, len = 0, sign = 0;
	char *array;

	num = va_arg(arg, int);
	number = num;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		sign = 1;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		/*Convert the number to a string of digits*/
		array = (char *) malloc(len);
		if (array == NULL)
			exit(0);
		while (num > 0)
		{
			array[i] = num % 10 + '0';
			num /= 10;
			i++;
		}
		/*Output the digits in reverse order*/
		for (j = i - 1; j >= 0; j--)
			_putchar(array[j]);
		free(array);
	}
	return (sign + len);
}
