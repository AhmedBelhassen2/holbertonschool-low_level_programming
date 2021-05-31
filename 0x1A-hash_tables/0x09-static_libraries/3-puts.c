#include "holberton.h"
/**
 *_puts - write a string
 *@str: the wanted string
 */
void _puts(char *str)
{
int i;

for (i = 0; *str != '\0'; i++)
{
_putchar (*str);
str++;
}
_putchar ('\n');
}
