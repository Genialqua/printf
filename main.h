#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer function
 * @type_arg: identifier
 * @f: a pointer to a printer function
 *
 * Description: struct that keeps pointers to a
 * printer function.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);

#endif
