#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Return: success
 */
int main(void)
{
long int n = 612852475143;
long int j, q;

j = 2;
q = 5;
while (q != 1)
{
if (n % j != 0)
{
j++;
}
else
{
q = n / j;
n = q;
}
}
printf("%ld\n", j);


return (0);
}
