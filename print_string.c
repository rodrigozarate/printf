#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* print_str - Print formated string
* @theList: va_arg
* Return: String to print
*/
char *print_str(va_list theList)
{
	char *whattosave;
	char *str;
	int length = 0;

	if (!theList)
		return (0);

	str = va_arg(theList, char *);
	while (str[length] != '\0')
		length++;

	whattosave = malloc((length * sizeof(char)) + 1);
	if (!whattosave)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		whattosave[length] = str[length];

	return (whattosave);
}
