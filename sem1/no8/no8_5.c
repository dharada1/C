#include <stdio.h>

int sho,amari;

void divide(int x,int y){
  sho = x/y;
  amari = x%y;
}

int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  divide(a,b);
  printf("%d %d\n",sho,amari);
return 0;
}
