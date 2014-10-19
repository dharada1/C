#include<stdio.h>
#include<math.h>
#define hantei 0.00000001

double func(double a){
  return a*a*a - 6*a*a + 9*a - 1;
}
double dfunc(double a){
  return 3*a*a - 12*a + 9;
}


int main(void){
  double x;
  int i;
  x=5;
  do{
    x=x-func(x)/dfunc(x);
  }while(fabs(func(x))>hantei);
  printf("%.9f\n",x);
  printf("%d",i);
  return 0;
}
