#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 in success
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
if (i != 'e' && i != 'q')
putchar(i);
putchar('\n');
return (0);
}
