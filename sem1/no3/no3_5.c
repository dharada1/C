#include <stdio.h>

int main(void)
{
  int a;
  int k,l,m,n;
  scanf("%d", &a);

  k = a/1000;
  printf("%d\n", k);

  l = (a/100)-(k*10);
  printf("%d\n", l);

  m = (a/10)-(l*10)-(k*100);
  printf("%d\n", m);

  n = a-(m*10)-(l*100)-(k*1000);
  printf("%d\n", n);
  return 0;
}
