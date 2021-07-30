#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct arg_s - args structure
 *
 * @f: Option for the argument.
 * @op: Function to call.
 */
typedef struct arg_s
{
	char op;
	char* (*f)();
} op_t;

char* (*get_op_func(char *s))(va_list);
char *print_char(va_list theList);
char *print_int(va_list theList);
char *print_string(va_list theList);

#endif /* HOLBERTON_H */

