#include <stdio.h>

int i;

double maximum(double a[]){
  double max;
  max=a[0];
  for(i=0;i<11;i++){
    if(max<a[i]){
      max=a[i];
    }
  }
  i=0;
  return max;
}

double minimum(double b[]){
  double min;
  min=b[0];
  for(i=0;i<11;i++){
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
  for(i=0;i<11;i++){
    scanf("%lf\n",&numbers[i]);
  }
  i=0;
  x=maximum(numbers);
  y=minimum(numbers);
  printf("%lf\n%lf\n",x,y);
  return 0;
}
