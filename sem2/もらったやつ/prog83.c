#include <stdio.h>
#include <stdlib.h>

int sum( int i ) {
  if( i ==1) return (1);
  else return( i + sum(i - 1) );
}

int main(void)
{
  int n;
  int i,j;

 printf("Enter the positive integer > ");
scanf("%d", &n);

 for(i = 1; i<= n; i++)
   {
   printf("%d=", sum(i)); 
   

 for(j=1; j<i; j++)
 {
   printf("%d+", j);
 }

 printf("%d\n", i);

   }
   

 printf("Total : %d\n", sum(n));

return 0;

}
