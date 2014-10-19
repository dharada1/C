#include <stdio.h>

int main(void){
  
  int A[16][8],i,a,b;
  
  for(i=0;i<=127;i++){
    a=i/8;
    b=i%8;
    A[a][b]=i; 
  }

  for(i=0;i<=127;i++){
    a=i/8;
    b=i%8;
    printf("%c",A[a][b]);
    if(b==7){
      printf("\n");
      }
  }

return 0;
  }
