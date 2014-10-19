#include <stdio.h>

double maximum(double x)
{
  static double max=-1.7e308;
  if(x >= max){
    max = x;
  }
  return max;
}

double minimum(double y)
{
  static double min=1.7e308;
  if(y <= min){
    min = y;  
  }
  return min;
}


int main(void)
{
  double a,b,c;
  int i;
  for(i=1;i<=5;i++)
    {
      scanf("%lf",&a);
      b=maximum(a);
      c=minimum(a);
    }
  printf("%lf\n%lf\n",b,c);
  return 0;
}
