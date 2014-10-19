#include <stdio.h>

int main(void)
{
  int a, b;
  double c;
  
  a = 3;
  b = 2;
  
  c = (double)a / (double)b;
  printf("a / b = %f\n", c);
  
  return 0;
}
