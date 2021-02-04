#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 in success
 */
int main(void)
{
int f = '0';
while (f <= '9')
{
putchar(f++);
}
putchar('\n');
return (0);
}
