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

for (i = (s / 2) ; i <= s; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
