#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct form - the struct
 * @cond: the format
 * @printType: the func
 * Return: void
 */

typedef struct form
{
char *cond;
void (*printType)(va_list lol);
} form;

#endif
