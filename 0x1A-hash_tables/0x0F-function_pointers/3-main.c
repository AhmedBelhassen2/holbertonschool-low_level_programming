#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Do mathematical calculations with arguments passed to program
 * @argc: The number of arguments passed to the program
 * @argv: The pointer to the array of arguments passed to the program
 * Return: pointer to corresponding function.
 */

int main(int argc, char **argv)
{
int num1 = 0, num2 = 0;
int (*f)(int, int);
int r;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
exit(99);
}
if (num2 == 0 && (f == op_div || f == op_mod))
{
printf("Error\n");
exit(100);
}
r = f(num1, num2);
printf("%d\n", r);
return (0);
}
