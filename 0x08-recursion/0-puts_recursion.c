#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
