#include <stdio.h>
#include <math.h>

int main(void)
{
  double a;
  double x;
  double y;
  scanf("%lf", &a);
  x = cos(M_PI * a / 180.0);
  y = sin(M_PI * a / 180.0);
  printf("%lf\n", x);
  printf("%lf\n", y);
  return 0;
}
