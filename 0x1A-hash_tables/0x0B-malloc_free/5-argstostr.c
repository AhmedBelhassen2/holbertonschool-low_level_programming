#include <stdlib.h>
#include "holberton.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
int x, y, z, lg;
char *str;

if (ac == 0 || av == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
lg++;
lg++;
}
str = malloc(sizeof(char) * (lg + 1));
if (str == NULL)
return (NULL);
z = 0;
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++)
{
str[z] = av[x][y];
z++;
}
str[z] = '\n';
z++;
}
return (str);
}
