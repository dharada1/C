#include <stdio.h>

int main(void)
{
  double x[12] = {-4.1, -3.5, 0.1, 6.7, 12.1, 16.3, 20.5, 22.0, 17.6, 11.3, 4.6, -1.0};
  
  double max=x[0];
  double min=x[0];
  int i;
  for(i=0;i<12;i++){
    if(max<x[i]){
      max=x[i];
    }
    if(min>x[i]){
      min=x[i];
    }
  }
  printf("%lf\n%lf\n",max,min);
  return 0;
}
