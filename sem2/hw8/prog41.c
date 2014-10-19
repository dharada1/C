#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEGREES 3.1415926/180.0

double si(double a){ return sin(a); }
double co(double a){ return cos(a); }
double ta(double a){ return tan(a); }

int main( void )
{
  double (*pfunc[])() = {si, co, ta};
  double pa, pb;
  int idx_f;
  char* opt[] = {"0.sin", "1.cos", "2.tan"};

  while(printf("\n%s\n%s\n%s\nEnter the operation ID and values>  ",opt[0],opt[1],opt[2]),
	(scanf("%d", &idx_f) )  != EOF )
{
 


  if( idx_f > 2 || idx_f < 0 ) 
    {
      printf("数字を打ち直してください\n");
    }


  else
   {
     printf("角度を入力してください\n");
     scanf("%lf", &pa);
     pb = pa * DEGREES;
    printf("\n[ANSWER] %s(%lf) = %lf\n", opt[idx_f], pa, pfunc[idx_f](pb));
   }


 }
  putchar('\n');
  return 0;
}
