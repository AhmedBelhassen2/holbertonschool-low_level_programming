#include "holberton.h"
/**
 * print_last_digit - returns 1 if  the number is positve else it will return 0
 *
 * @r: show the last digit of number
 * Return: r (last digit  success
 */
int print_last_digit(int r)
{
r %= 10;
if (r < 0)
r = -r;
_putchar(r + '0');
return (r);

}
