#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - Prints the last digit of a number
 *
 * Return: void.
 */
void more_numbers(void)
{
int i;
int x;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x < 10)
_putchar(x + '0');
else
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
}
_putchar('\n');
}
}
