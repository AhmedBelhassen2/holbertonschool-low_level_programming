#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum of all arguments
 * @n: The number of arguments
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int j, sum = 0;

va_start(l, n);
if (n == 0)
return (0);
for (j = 0; j < n; j++)
sum += va_arg(l, int);
va_end(l);
return (sum);
}
