#include<stdio.h>
#define N 5

int main(void){

  double a[N],ave,mid,t;
  int i,j;

  for(i=0;i<N;i++){
    scanf("%lf",&a[i]);
  }

  ave=0;
  for(i=0;i<N;i++){
    ave+=a[i];
  }
  ave=ave/N;
  printf("%lf\n",ave);
  
  for(i=0;i<N;i++){
    for(j=N-1;j>=i+1;j--){
      if(a[j]<a[j-1]){
	t=a[j];
	a[j]=a[j-1];
	a[j-1]=t;
      }
    }
  }
  
  if(N%2==0){
    mid=a[N/2-1]+a[N/2];
  }
  else if(N%2==1){
    mid=a[N/2];
    }
  printf("%lf\n",mid);

  return 0;
}
