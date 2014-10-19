#include <stdio.h>

int main(void)
{
  int a, b, c;
  
  a = 3;
  b = 2;
  
  c = -a;
  printf("-a = %d\n", c);
  
  c = a + b;
  printf("a + b = %d\n", c);
  
  c = a - b;
  printf("a - b = %d\n", c);
  
  c = a * b;
  printf("a * b = %d\n", c);
  
  c = a / b;
  printf("a / b = %d\n", c);
  
  c = a % b;
  printf("a %% b = %d\n", c);
  
  return 0;
}
