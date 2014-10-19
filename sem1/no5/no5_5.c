#include <stdio.h>
int main(void)
{
  int n,i,a;
  a=1;
  scanf("%d",&n);
  if(n != 1){
  for(i=2;i<=n-1;i++){
    if(n%i == 0){
      a=0;
      break;
    }
  }
  }
  else if(n=1){
  a=0;
  }
  printf("%d",a);
  return 0;
}
