/*
* _printf.c - mimic of printf
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 27, 2021
*/

#include "holberton.h"

/**
* _printf - Print formated
* @format: char pointer
* Return: Number of char printed or -1 on error
*/

int _printf(const char *format, ...)
{
	va_list vaList;
	int i, j, index = 0;
	char bufer[1986], *str, the_char;
	char* (*choose)(va_list);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(vaList, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			choose = get_op_func((char *)format + i);
			if (!choose)
				return (-1);
			str = choose(vaList);
			for (j = 0; str[j]; j++)
			{
				bufer[index] = str[j];
				index++;
			}
		}
		else
		{
			bufer[index] = format[i];
			the_char = (char)bufer[index];
			if (the_char == '%')
				format++;

			index++;
		}
	}
	va_end(vaList);
	write(1, &bufer, index);
	return (index);
}
