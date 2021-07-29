/*
* print_char.c - Function when c
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 28, 2021
*/

#include holberton.h

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
	if !(whattosave)
	{
		return (NULL);
	/* malloc failed so exit */
	}
	if (theChar)
	{
		whattosave[1] = theChar;
	/* is a real char */
	}
	else
	{
		whattosave[0] = '\0';
	/* null in this space */
	}
	/* end */
	whattosave[1] = '\0';
	/* to the caller */
	return (whattosave);
}
