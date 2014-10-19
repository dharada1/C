#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double *x,*y;
  double k;

  while(1)
    {
 x = malloc( sizeof(int));
 y = malloc( sizeof(int));
 

 if (x == NULL || y == NULL)
    {
      fprintf(stderr, "memory allocation fault.\n");
      exit(1);
    }

 printf("Enter two value >> \n");


 scanf("%lf", x);
 scanf("%lf", y);

 {
 if(*x-*y > 0)
   {
  k =  *x-*y;
   }

 else if(*x-*y < 0)
   {
   k = *y-*x;
   }
 }

 printf("%lf\n", k);

if( scanf("%lf",x) || scanf("%lf",y) == EOF ) break;

 free(x);
 free(y);
    }

  free(x);
  free(y);



 return 0;
}



