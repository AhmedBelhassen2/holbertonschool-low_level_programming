#include <stdio.h>
/**
 * main - print the alpabet in lower case and uppercase
 * Return: 0
 */
int main(void)
{
int x;
char c;
for (x = 0; x < 9; x++)
{
putchar(x);
}
for (c = 'a' ; c <= 'f' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
