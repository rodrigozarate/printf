#include "holberton.h"


char* (*get_op_func(char *s))(va_list)
{
	op_t ops[] = {
			/*{'c', print_char},
			{'s', print_str},*/
			{'d', print_int},
			{'i', print_int},
			/*{'%', print_char},*/
			{'\0', NULL}
	};
	unsigned int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op == *s) /* no puedo comparar un caracter con puntero */
			return (ops[i].f);
		i++;
	}
	return (NULL);

}