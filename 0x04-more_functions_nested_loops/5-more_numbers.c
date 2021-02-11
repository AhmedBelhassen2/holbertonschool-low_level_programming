#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
int i;
int x;

for (i = 0; i < 10; i++)
{
for (x = 0; x <= 14; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
