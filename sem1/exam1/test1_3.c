#include <stdio.h>

int main(void){

  int n,i,a,number;

  scanf("%d",&n);
  
  for(number=2;number<=n;number++){

    a=1;

    for(i=2;i<=number-1;i++){
      if(number%i == 0){
	a=0;
	break;
      }
    }
    
    if(a == 1){
      printf("%d\n",number);
    }
  }  
  
  return 0;
}
