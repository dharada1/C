#include <stdio.h>

int main(void){
  
  char x[100],y[100];
  int i;

  scanf("%s",x);

  for(i=0;i<100;i++){

    if(x[i]==0){
      break;
    }
    y[i]=155-x[i];
  }
  printf("%s\n",y);
  return 0;
}
