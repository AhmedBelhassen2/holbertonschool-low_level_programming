#include "holberton.h"
/**
 * print_diagonal - showing diagonals using "\" character
 * @n: integer
 * Return: diagonals
 */
void print_diagonal(int n)
{

int diagonal;
int space;
if (n > 0)
{
for (diagonal = 0; diagonal < n ; diagonal++)
{
for (space = 0; space < diagonal ; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
