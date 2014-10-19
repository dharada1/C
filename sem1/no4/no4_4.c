#include <stdio.h>

int main(void)
{
  int a,b;
  scanf("%d",&a);
  if (a%400 == 0){
    b=1;
  }
  else if (a%100 != 0 && a%4 == 0){
    b=1;
  }
  else{
   b=0
  }
  printf("%d\n",b);
  return 0;
}
