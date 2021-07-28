#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct arg_s
{
	char op;
	char* (*f)();
} op_t;

char* (*get_op_func(char *s))(va_list);
char *print_int(va_list theList);

#endif /* HOLBERTON_H */

