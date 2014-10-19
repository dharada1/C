#include<stdio.h>
#include<math.h>
#define hantei 0.00000001

double func(double a){
  return a*a*a - 6*a*a + 9*a - 1;
}

int main(void){
  double low,high,x,xa;
  low=3;
  high=5;
  do{
    x=(low+high)/2;
      if(func(x)>0)high = x;
      if(func(x)<0)low = x;
  }while(fabs(func(x))>=hantei);
  printf("%.9f\n",x);
  

  return 0;
}
