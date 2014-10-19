#include <stdio.h>

int display(int x){
  if(x==1){
    printf("Hello,world\n");
    return 1;
  }
  else{
    printf("Hello,world\n");
    return display(x-1);
  }
}

int main(void){
  int n;
  scanf("%d",&n);
  display(n);
  return 0;
}
