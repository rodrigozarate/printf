/*
* print_char.c - Function when c
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 28, 2021
*/

#include "holberton.h"

/**
* print_char - Print formated
* @theList: va_arg
* Return: String to print
*/

char *print_char(va_list theList)
{
	char *whattosave;
	char theChar;

	if (!theList)
		return (0);

	theChar = va_arg(theList, int);
	whattosave = malloc(sizeof(char) * 2);
	if (!whattosave)
	{
		free(whattosave);
		return (NULL);
	}
	if (theChar)
	{
		whattosave[0] = theChar;
	}
	else
	{
		whattosave[0] = '\0';
	}
	whattosave[1] = '\0';
return (whattosave);
}
