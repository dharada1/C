#include <stdio.h>

int main(void)
{
  double a, b, c;
  
  scanf("%lf %lf", &a, &b);
  
  c = -a;
  printf("-a = %f\n", c);
  
  c = a + b;
  printf("a + b = %f\n", c);
  
  c = a - b;
  printf("a - b = %f\n", c);
  
  c = a * b;
  printf("a * b = %f\n", c);
  
  c = a / b;
  printf("a / b = %f\n", c);
  
  return 0;
}
