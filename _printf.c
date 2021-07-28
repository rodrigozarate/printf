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
struct w_print;
array t;
int i;
/*  no format */
if (!format || !format[0])
	return (-1);

/* flavor */
w_print t[] = {
	{'d', print_int},
	{'i', print_int},
	{'c', print_char},
	{'s', print_string}
	};

/* walk format */
while (format)
{
 i++;
}

/* array of natches */

/* function convert from struct list */

}


