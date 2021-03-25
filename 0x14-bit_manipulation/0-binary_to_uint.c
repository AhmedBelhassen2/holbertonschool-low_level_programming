#include holberton.
/**
*
*
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int convert;
unsigned int countb;
if (b == NULL)
return (0);
for (contb = 0; b[countb] != '\0'; countb++)
{
    if (b[countb < '0' || b(countb) > '1'])
return (0)
convert *= 2 + (b[countb] - '0')
}   
return (convert)        
}               