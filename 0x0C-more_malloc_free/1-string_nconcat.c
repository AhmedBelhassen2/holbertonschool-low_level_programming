#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Returns a pointer to a new string
 * @s1: The string
 * @s2: The string
 * @n: bytes
 * Return: Pointer to the duplicated string 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0, j = 0, k = 0;
  char *p;
if (s1 == NULL || s2 == NULL)
return (NULL);
while (s1[i] != '\0')
i++;	
while (s2[j] != '\0')
j++;
if (n > j)
  p = malloc(sizeof(char) * (i + j + 1)); 
else 
  p = malloc(sizeof(char) * (i + n + 1));
if (p == NULL)
{
free(p);
return (NULL);
}
for (k = 0; k < i; k++)
p[k] = s1[k];
while (n < j && k < (i + n))
p[k++] = s2[j++];
while (n >= j && k < (i + j))
p[k++] = s2[j++];

 p[k] = '\0';
return (p);
}
