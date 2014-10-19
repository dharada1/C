#include <stdio.h>

int main(void)
{
  double a;
  double max,min;

  scanf("%lf", &a);
    max = a;
    min = a;

  int i;
  i=0;
  do{
    scanf("%lf", &a);
    if (a>=max){
      max = a;
    }
    else if (min>=a){
      min = a;
    } 
    i = i+1;
  }while(i<4);
  
  printf("%lf \n %lf", max,min);
  return 0;
}
