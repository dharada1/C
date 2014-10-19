#include <stdio.h>

int main(void)
{
  int a, b, c;
  
  scanf("%d %d", &a, &b);

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
