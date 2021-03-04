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
unsigned int i = 0, j = 0;
char *p;
if (s1 == NULL || s2 == NULL)
return (NULL);
while (s1[i] != '\0')
i++;	
p = malloc(i + n + 1);
if (p == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
p[i] = s1[i];
for (; i < i + n ; i++)
{
p[i] = s2[j];
j++;
if (j == n)
break; 
}
return (p);
} 

