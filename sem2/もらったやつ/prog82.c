#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int a;
 int i;
 int j;
 int k;
 int sum;
 int s=0;;


 printf("Enter the positive integer > ");
scanf("%d", &a);

 for(j=1; j<=a; j++)
   {
     sum = 0;
for(i=1; i<=j; i++)
  {
    
    sum += i;
  }

 
     printf("%d=", sum);

     for(k=1; k<j; k++)
     {
       printf("%d+", k);
      }

   printf("%d\n", j);

   }

 for(i=1; i<=a; i++)
   {
     s += i;
   }

 printf("Total : %d\n ", s);

return 0;

}
