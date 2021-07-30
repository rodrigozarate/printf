/*
* print_char.c - Function when c
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 28, 2021
*/

#include "holberton.h"

/**
* _strreplace - Replace string in case of NULL arg
* @deststr: destiny
* @source: fountain
* Return: string
*/

char *_strreplace(char *deststr, char *source)
{
	int i = 0;

	while (source[i])
	{
		deststr[i] = source[i];
		i++;
	}
	deststr[i] = '\0';
	return (deststr);
}

/**
* print_string - Prints the string
* @theList: va_list pointer
* Return: return pointer
*/

char *print_string(va_list theList)
{
	char *string;
	char *result;
	int j;

	if (!theList)
		return (0);
	string = va_arg(theList, char *);
	if (string == NULL)
	{
		/* 6 for (null) 1 for '\0' */
		result = malloc(sizeof(char) * 7);
		result = _strreplace(result, "(null)");
		return (result);
	}
	if (string[0] == '\0')
		return (NULL);
	for (j = 0; string[j]; j++)
	;
	result = malloc(j + 1);
	if (!result)
		return (NULL);
	result = _strreplace(result, string);

	return (result);
}
