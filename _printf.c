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

	int i;
/*  no format */
	if (!format || !format[0])
		return (-1);

/* flavor */
	struct t[] = {
		{'%', print_pocino},
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

/* walk format */
	for (i = 0;format;i++)
	{
		if (/* match format[i]  contra % */)
			{
				
				if (/* compara format[i + 1] contra struct */)
					/* llama funcion corresponde*/
					/* escribe en el buffer */
				else (/* morir */)
			}

	}
prit My buffer
}
