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
	char bufer[2000];
	char *str;
	char* (*choose)(va_list);


/*	int choose = get_op_func()*/

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(vaList, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			choose = get_op_func((char *)format + i);  /* se caster const char a char *   */
			if (!choose)
			{
				return (-1);
			}

			str = choose(vaList);

			for (j = 0; str[j]; j++)
			{
				bufer[index] = str[j];
				index++;
			}
		}
		else
		{
			bufer[index] = format[i ];
			index++;
		}
	}
	write(1, &bufer, index);
	return (index);
}
