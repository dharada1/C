#include<stdio.h>
#define lengthA 10

void func(void){

  int a[lengthA],i,j,temp;

  for(i=0;i<lengthA;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<lengthA-1;i++){
    for(j=lengthA-1;j>i;j--){
      if(a[j-1]>a[j]){
	temp=a[j];
	a[j]=a[j-1];
	a[j-1]=temp;
      }
    }
  }

  for(i=0;i<lengthA;i++){
    printf("%d\n",a[i]);
  }
}


int main(void){
  func();
  return 0;
}
