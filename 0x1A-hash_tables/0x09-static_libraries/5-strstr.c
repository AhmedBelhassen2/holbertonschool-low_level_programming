#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
 *_strstr - locates a substring.
 *@haystack: character
 *@needle: character
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, n;

i = j = 0;
while (haystack[i] != '\0')
{
n = i;
j = 0;
while (haystack[i] == needle[j] && needle[j] != '\0' && haystack[i] != '\0')
{
i++;
j++;
}
if (needle[j] == '\0')
return (haystack + n);
i = n + 1;
}
return (0);
}
