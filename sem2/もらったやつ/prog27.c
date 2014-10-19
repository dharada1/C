#include <stdio.h>
#define ROW 3
#define COL 4


int main(void)
{
 
  int *ptr[ROW], i,j;

 int a[ROW][COL] = 
   { {11,12,13,14},
     {21,22,23,15},
     {31,32,33,16}};

  for(i=0; i<ROW; i++)
    {
     
	  *(ptr+i) = *(a+i);
       
    }    

  
 for(i=0; i<ROW; i++)
   {
     for(j=0; j<COL; j++)
       {
	 printf("%3d", *(*(ptr+i)+j) );
   
       }
     printf("\n");
   }



return 0;

}
