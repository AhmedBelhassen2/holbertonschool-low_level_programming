#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 in success
 */
int main(void)
{

int a;
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10
j = n
printf("Last digit of %i is %i ", j, n);
if (n > 5)
printf("and is greater than 5\n");
else if (n < 6 && n != 0)
printf("and is less than 6 and not 0\n");
else
printf("and is 0\n");
return (0);
}


