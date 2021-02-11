#include "holberton.h"
/**
 * print_triangle - draw a triangle using the "#" character
 * @size: integer that determines the demntions of the triangle
 * Return: square
 */
void print_triangle(int size)
{

int triangle;
int space;
if (size > 0)
{
for (triangle = 0; triangle < size ; triangle++)
{
for (space = 0; space < size ; space++)
{
if (space < size - i - 1)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
