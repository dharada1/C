#include <stdio.h>

void calc(int, int*, int*);

  int main(void){
  int a,ca,lc;

 printf("Input a Number >>  ");

   while(EOF != scanf("%d", &a) )
    {
    calc(a, &ca, &lc);
    printf("aの二乗は %d, aの３乗は %d です\n", ca, lc);
    printf("Input a Number >>  ");
    }




  return 0;
}


void calc(int a, int *ca, int *lc)
{

  *ca = a * a;
  *lc = a * a * a;

}
