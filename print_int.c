#include "holberton.h"

/*
* print_int.c - Function when i or d
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 28, 2021
*/

/**
* print_int - Print formated
* @theList: va_arg
* Return: String to print
*/
char *print_int(va_list theList)
{
	char *whattosave;
	int n;
	int i = 0, j = 0;
	char muffer[10]; /* for the muuuus */
	unsigned int mu;

	if (!theList)
		return (NULL);
	n = va_arg(theList, int);
	if (n == 0)
	{
		j = 1;
		whattosave = malloc(sizeof(char) * 2);
			if (whattosave)
				whattosave[0] = '0';
			else
			{
				free(whattosave);
				return (NULL);
			}
	}
	else
	{
		if (n < 0)
			mu = -n;
		else
			mu = n;

		while (mu)
		{
			muffer[i++] = (mu % 10) + '0';
			mu = mu / 10;
		}
		if (n < 0)
			muffer[i++] = '-';
		whattosave = malloc(sizeof(char) * i);
			if (whattosave)
			{
				i--;
				while (i >= 0)
				whattosave[j++] = muffer[i--];
			}
			else
			{
				free(whattosave);
				return (NULL);
			}
	}
	whattosave[j] = '\0';
	return (whattosave);
}
