#include "holberton.h"
/**
 * puts_half - print the second part of the string
 * @str: the string to reverse
 * Return: void.
 */

void puts_half(char *str)
{
int s = 0;
int i;

while (str[s] != 0)
{
s++;
}
s = s - 1;
if (s % 2 == 0)
{
for (i = (s / 2) ; i <= s; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (s / 2) + 1 ; i <= s; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
