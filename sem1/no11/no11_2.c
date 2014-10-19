#include <stdio.h>

int main(void){
  
  int A[16][8],i,a,b;
  
  for(i=0;i<=127;i++){
    a=i/8;
    b=i%8;
    A[a][b]=i;
  }
  


  char x;
  int c,d;
  scanf("%c",&x);
  c=x;

  /*
  printf("%d\n",c);
  */

  if(c>=65&&c<=90){
    d=c+32;
    printf("%c\n",d);
  }
  if(c>=97&&c<=122){
    d=c-32;
    printf("%c\n",d);
  }
  
return 0;
  }
