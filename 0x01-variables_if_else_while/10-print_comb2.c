#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 00; ch <= 99; ch++)
{
putchar ((ch / 10) + '0');
putchar((ch % 10) + '0');
if (ch != 99)
{
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
