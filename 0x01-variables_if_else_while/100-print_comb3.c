#include <stdio.h>
/**
 *main - pritns numbers
 *Return: 0
 */
int main(void)
{
int i;
int j;

i = 48;
j = 49;
while  ((i < 57) && (j < 58))
{
putchar(i);
putchar(j);
if ((i == 56) && (j == 57))
{
putchar('\n');
i++;
j++;
}
else
{
putchar(44);
putchar(32);
if (j < 57)
{
j++;
}
else
{
i++;
j = i + 1;
}
}

}

return (0);
}
