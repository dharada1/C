#include <stdio.h>


int i;

double maximum(double a[],int sizeofa){
  double max;
  max=a[0];
  for(i=0;i+1<sizeofa;i++){
    if(max<a[i]){
      max=a[i];
    }
  }
  i=0;
  return max;
}



double minimum(double b[],int sizeofb){
  double min;
  min=b[0];
  for(i=0;i+1<sizeofb;i++){
    if(min>b[i]){
      min=b[i];
    }
  }
  i=0;
  return min;
}





int main(void)
{
  double x,y,numbers[12];
  int z=sizeof numbers;
  for(i=0;i<11;i++){
    scanf("%lf\n",&numbers[i]);
  }
  i=0;
  x=maximum(numbers,z);
  y=minimum(numbers,z);
  printf("%lf\n%lf\n",x,y);
  return 0;
}
