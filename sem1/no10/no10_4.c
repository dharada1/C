#include <stdio.h>
#include <math.h>

void multiply(double a[],double b[],double c){
  double A[2][2];
  A[0][0] = cos(M_PI * c / 180.0);
  A[0][1] = -sin(M_PI * c / 180.0);
  A[1][0] = sin(M_PI * c / 180.0);
  A[1][1] = cos(M_PI * c / 180.0);
  a[1]=A[0][0]*a[0] + A[0][1]*b[0];
  b[1]=A[1][0]*a[0] + A[1][1]*b[0];
}


int main(void)
{
  double x[2],y[2],theta;
  scanf("%lf%lf%lf",&x[0],&y[0],&theta);
  multiply(x,y,theta);
  printf("%lf %lf\n",x[1],y[1]);
  return 0;
}
