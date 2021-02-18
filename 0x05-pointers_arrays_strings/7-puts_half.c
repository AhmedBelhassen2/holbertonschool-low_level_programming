#include "holberton.h"
/**
 * puts_half - print the second part of the string
 * @str: the string to reverse
 * Return: void.
 */

void puts_half(char *str)
{
int s = 0;
int i, len;

while (str[s] != '\0')
{
s++;
}
if (s % 2 == 0)
len = (s / 2);
else
len = ((s + 1) / 2);
for (i = len ; i <= s; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
