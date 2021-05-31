#include "holberton.h"
#include <stdio.h>
/**
 *_pow_recursion - gives the power of a number
 *@x: int
 *@y: int
 *Return: -1 (y lower then 0) , 1 (y == 0), result
 */
int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
