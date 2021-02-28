#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints args
 * @argc: size of array argv
 * @argv: array
 * Return: int
 */
int main(int argc, char **argv)
{
int x;
int y;
int t = 0;
if (argc <2)
{
printf("0\n");
return (0);
}
for (x = 1; x < argc ; x++)
{
for (y = 0; argv[x][y] != '\0' ; y++)
{
if (!(argv[x][y] >= '0' && argv[x][y] <= '9'))
{
printf("Error\n");
return (1);
}
}
}
for (x = 1; x < argc ; x++)
{
t += atoi(argv[x]);
}
printf("%d\n", t);
return (0);
}

