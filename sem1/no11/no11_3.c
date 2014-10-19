#include <stdio.h>

int main(void){

  char x[100],y[100];
  int c,i;

  scanf("%s",x);

  for(i=0;i<100;i++){

    if(x[i]==0){
      break;
    }
 
    c=x[i];
    
    if(c>=65&&c<=90){
      y[i]=c+32;
    }
    
    if(c>=97&&c<=122){
      y[i]=c-32;
    }
  }
  printf("%s\n",y);
  return 0;
}
