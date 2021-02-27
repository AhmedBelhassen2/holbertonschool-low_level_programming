#include "holberton.h"
#include <string.h>
/**
 *_strcat - concating two strings
 *@dest: the wanted string
 *@src: the source string
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j;

while (dest[i] != '\0')
i++;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i + 1] = '\0';
return (dest);
}
