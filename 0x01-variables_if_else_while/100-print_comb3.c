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
putchar(i);
putchar(j);
for (j = i + 1; i <= 9; j++)


putchar(',');
putchar(' ');


putchar('\n');
return (0);
}
