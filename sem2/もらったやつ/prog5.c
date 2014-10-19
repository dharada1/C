#include <stdio.h>
#include <math.h>


int main(void)
{
  double x,k;
  double *xp = &x;

  printf("Enter a floating number > ");
  


  while(EOF != scanf( "%lf",&x) )
  
 {
  
  k = *xp * *xp;
  printf("%.1f^2 = %.2f\n",x,k );
  printf("Enter the next value > ");
  }

  
  return 0;
}
