#include "holberton.h"
/**
 * print_square - draw a square using the "#" character
 * @size: integer that determines the demntions of the square
 * Return: square
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size ; i++)
{
for (j = 0; j < size ; j++)
{
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
