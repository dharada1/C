#include <stdio.h>
#include <math.h>

int main(void){

  double A,theta,t,x,y;

  scanf("%lf%lf%lf", &A,&theta,&t);
  
  x = A * cos(theta * t);
  y = A * sin(theta * t);
 
  printf("%lf %lf\n", x,y);
  return 0;
}
