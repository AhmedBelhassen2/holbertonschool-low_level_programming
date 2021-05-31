#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the natural number from n to 98
 * @n: the print start
 *
 * Return: void
 */
void print_to_98(int n)
{
int a, i;
if (n < 98)
{
for (a = n; a < 98; a++)
{
printf("%d, ", a);
}
}
else if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
