#include <stdio.h>
#include <math.h>

int main(void)
{
  int i,j,k;
  int *ip= &i, *jp = &j;

  printf("i = ");
  scanf("%d", ip);

  printf("j = ");
  scanf("%d", jp);

  if(i-j > 0)
    {
      k=i-j;
    }

  else if(i-j < 0)
    {
      k = j-i;
    } 


  printf("%d\n", k);
  
  return 0;
}
