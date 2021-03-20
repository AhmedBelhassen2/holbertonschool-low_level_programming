#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct form - the struct
 * @c: the format
 * @printTypef: the func
 * Return: void
 */

typedef struct form
{
	char *c;
	void (*printTypef)(va_list ap);
} form;

#endif
