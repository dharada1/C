#include <stdio.h>

int main(void)
{
  double a,b,c,d,e;
  scanf("%lf",&a);
  b=(int)a;   
  c=a+0.5;
  d=(int)c;
  e=(int)a + 1 - (int)(1 - (a -(int)a));
  printf("%d %d %d\n" ,(int)a, (int)d,(int)e);
  return 0;
}
