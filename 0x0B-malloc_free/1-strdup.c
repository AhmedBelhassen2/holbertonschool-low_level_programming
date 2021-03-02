#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string
 * @str: string to copy
 * Return: n.
 */
char *_strdup(char *str)
{
char *n;
int x = 0, y = 0;
if (str == NULL)
return (NULL);
while (str[x] != '\0')
x++;
n = malloc(x *sizeof(char));
if (n == NULL)
return (NULL);
while ((n[y] = str[y]) != '\0')
y++;
return (n);
}
