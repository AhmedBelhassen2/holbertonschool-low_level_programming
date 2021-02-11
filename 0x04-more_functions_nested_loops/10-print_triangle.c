#include "holberton.h"
/**
 * print_triangle - prints out a triangle shape
 * @size: the size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int row;
int i;
int j;

if (size <= 0)
{
_putchar('\n');
} else
{
for (row = 1; row <= size; row++)
{
for (i = 0; i < size - row; i++)
_putchar(' ');
for (j = 0; j < row; j++)
_putchar('#');
_putchar('\n');
}
}
}
