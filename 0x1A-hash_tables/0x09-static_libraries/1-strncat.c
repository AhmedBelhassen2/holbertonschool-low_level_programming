#include "holberton.h"
#include <stdio.h>
/**
 *_strncat - concate two strings
 *@dest:wanted string
 *@src: source
 *@n: int
 *Return: dest (string)
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = src[j];
return (dest);
}
