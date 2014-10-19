#include <stdio.h>
#include <math.h>

int main(void)
{
  double a,b,c,d;
  
  scanf("%lf%lf%lf", &a,&b,&c);
  d = pow(b,2)-4*a*c;

  if (d>0){
    printf("%lf\n",(-b-sqrt(d))/(2*a));
    printf("%lf\n",(-b+sqrt(d))/(2*a));
  }
  else if (d==0){
    printf("%lf\n", (-b/(2*a)));
  }
  else{
    printf("%lf+i%lf\n", -b/(2*a), (sqrt(-d))/(2*a));
    printf("%lf-i%lf\n", -b/(2*a), (sqrt(-d))/(2*a));
  }
  return 0;
}
