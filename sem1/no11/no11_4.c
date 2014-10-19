#include <stdio.h>

int main(void){

  char x[100],y[100];
  int c,i;

  scanf("%s",x);

  for(i=0;i<100;i++){

    if(x[i]==0){
      break;
    }
 
      y[i]=x[i]-3;
  }
  printf("%s\n",y);
  return 0;
}
