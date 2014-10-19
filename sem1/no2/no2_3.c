#include <stdio.h>

int main(void)
{
  double a, b, c;
  
  a = 3.0;
  b = 2.0;
  
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
