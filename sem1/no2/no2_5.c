#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int x;
  srand((unsigned int)time(NULL));
  x = rand() % 10;
  printf("%d\n", x);
  return 0;
}
