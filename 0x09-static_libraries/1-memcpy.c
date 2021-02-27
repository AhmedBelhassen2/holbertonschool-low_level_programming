#include "holberton.h"
/**
 *_memcpy - copy bytes from  memory
 *@dest: character
 *@src: character
 *@n: integer
 *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
