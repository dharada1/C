#include <stdio.h>
#include <math.h>

int main(void)
{
  double x1,y1,A[1][1];
  A[0][0] = cos(M_PI * 45.0 / 180.0);
  A[0][1] = -sin(M_PI * 45.0 / 180.0);
  A[1][0] = sin(M_PI * 45.0 / 180.0);
  A[1][1] = cos(M_PI * 45.0 / 180.0);

  x1=A[0][0]*1 + A[0][1]*0;  
  y1=A[1][0]*1 + A[1][1]*0;
  printf("%lf %lf\n",x1,y1);
  return 0;
}
