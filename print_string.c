#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
* print_char - Print formated
* @theList: va_arg
* Return: String to print
*/

char *print_char(va_list theList)
{
	char *whattosave;
	char theChar;
	char *str;
	int length = 0;

	if (!theList)
		return (0);

	str = va_arg(theList, char *);
	while (str[length] != '\0')
		length++;

	whattosave = malloc(i * sizeof(char));
	if !(whattosave)
	{
		return (NULL);
	/* malloc failed so exit */
	}

	for (length = 0; str[length] != '\0'; length++)
		write(1, &str[len], 1);


	return (whattosave);
}
