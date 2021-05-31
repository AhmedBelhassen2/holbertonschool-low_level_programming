#include <stdio.h>
/**
 *
 *
 *
 */
int check(int a, int b)
{
if (b * b > a)
  return (-1);
if (b * b == 0)
  return(b);

check(a,b + 1);
}
int sqrt_rec(int n)
{
  check(n,1);
}
void main()
{
  int r;
  r = sqrt_rec(49);
  printf("%d\n",r);
}
