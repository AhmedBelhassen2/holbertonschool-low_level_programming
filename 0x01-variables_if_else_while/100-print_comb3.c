#include <stdio.h>
/**
 *main - pritns numbers
 *Return: 0
 */
int main(void)
{
int i = 0;
int j = 1;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');

if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
