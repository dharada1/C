#include <stdio.h>
#include <math.h>
#define DEGREES * (3.1415926/180.0)

int main(void)
{
  double a,b;
  double *theta = &a, *v0 = &b, vx,vy;

  printf("v0(m/s) = ");
  scanf("%lf", v0);

  printf("theta(deg) =  ");
  scanf("%lf", theta);

  vx = *v0*cos(*theta DEGREES);
  vy = *v0*sin(*theta DEGREES);

  printf("(vx,vy)(m/s)=(%.3f %.3f)\n", vx,vy);
  printf("%p %p %p %p\n", &v0, &vx,&vy,&theta);
  return 0;
}
