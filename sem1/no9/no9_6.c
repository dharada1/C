#include <stdio.h>

int gcd(int x,int y){
  if(x==y){
    return x;
  }
  else if(x>y){
    return gcd(x-y,y);
  }
  else if(x<y){
    return gcd(x,y-x);
  }
}

int main(void){
  int p,q;
  scanf("%d\n%d",&p,&q);
  printf("%d\n",gcd(p,q));
  return 0;
}
