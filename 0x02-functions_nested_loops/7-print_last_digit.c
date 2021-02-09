#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @x : type integer
 * Return: int
 *
 */
int print_last_digit(int x)
{
int y;

y = x % 10;
if (y < 0)
{
y = -y;
}
 _putchar(y + '0');
return (y);
}
