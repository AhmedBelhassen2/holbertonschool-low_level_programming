#include "holberton.h"
/**
 *swap_int - swaps the values of two variables
 *@a : int
 *@b : int
 *Return: 1
 */
void swap_int(int *a, int *b)
{
int p = *a;

*a = *b;
*b = p;
}
