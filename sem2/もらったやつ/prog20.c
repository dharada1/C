#include <stdio.h>
#define ROW 3
#define COL 4

int main(void)
{
  int a[ROW][COL];

  int i,j, suma, sumb, SUM;



  for(i=0; i<ROW; i++)
    {
      for(j=0; j<COL; j++)
	{
	  scanf("%d", &a[i][j]);
	}
    }
 suma = 0;
  for(i=0; i<ROW; i++)
    {
      for(j=0; j<COL; j++)
	{
	  suma = suma + *(*(a+i)+j); 
	  printf("%3d",*(*(a+i)+j));
	}   
      printf("%3d\n", suma);
      suma = 0;
    }    


  sumb=0;
for(i=0; i<COL; i++)
    {
      for(j=0; j<ROW; j++)
	{
	  sumb = sumb + *(*(a+i)+j); 
	}   
      printf("%3d", sumb);
      sumb = 0;
    }    

 SUM = 0;
 for(i=0; i<ROW; i++)
   {
     for(j=0; j<COL; j++)
       {
       SUM += *(*(a + i) + j);
       }
   }

 printf("%3d/n", SUM);




return 0;

}
