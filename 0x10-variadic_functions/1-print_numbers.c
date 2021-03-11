#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Print all numbers of the func
 * @n: The number of arguments
 * @separator: separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list l;

va_start(l, n);
for (i = 0; i < n; i++)
{
  printf("%d", va_arg(l, int));


if (((i < (n - 1)) && separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(l);

}
