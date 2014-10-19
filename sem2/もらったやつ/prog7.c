#include <stdio.h>
#include <math.h>

int main(void)
{
  int x,y,k,j;
  int *p= &x, *q = &y;

  printf("x = ");
  scanf("%d", &x);

  printf("y = ");
  scanf("%d", &y);

  k = *p+*q;

printf("和は%dです。\n", k);


  printf("x = ");
 scanf("%d", p);

 printf("y = ");
 scanf("%d", q);

 j = x*y; 

 
  printf("積は%dです。\n", j);
  return 0;
}
