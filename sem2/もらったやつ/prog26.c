#include <stdio.h>
#define ROW 3


int main(void)
{
  double a[ROW][ROW];
  double mul[ROW][ROW];
  double rec[ROW][ROW];
  double recmul[ROW][ROW];


  int i,j,k,suma,sumb;

printf("Aの成分を入れてください\n");

  for(i=0; i<ROW; i++)
    {
      for(j=0; j<ROW; j++)
	{
	  scanf("%lf", &a[i][j]);
	  
	}
    }

  
  for(i=0; i<ROW; i++)
    {
      for(j=0; j<ROW; j++)
	{
	  rec[i][j] = a[j][i];
        }
    }    



 for(i=0; i<ROW; i++)
    {
      for(j=0; j<ROW; j++)
	{

         suma = 0;
	  for(k=0; k<ROW; k++)
	    {
	      suma+= a[i][k]*a[k][j];
	     }
            mul[i][j]=suma;
	 }
    }    





  for(i=0; i<ROW; i++)
    {
      for(j=0; j<ROW; j++)
	{

         sumb = 0;
	  for(k=0; k<ROW; k++)
	    {
	      sumb+= a[i][k]*rec[k][j];
	     }
	  recmul[i][j] = sumb;
	 }
    }    


 printf("Aの転置行列は\n");

 for(i=0; i<ROW; i++)
   {
     for(j=0; j<ROW; j++)
       {
	 printf("%7.2lf",rec[i][j]);       
       }
     printf("\n");
   }


printf("AXAは\n");
 for(i=0; i<ROW; i++)
   {
     for(j=0; j<ROW; j++)
       {
	 printf("%7.2lf",mul[i][j]);       
       }
     printf("\n");
   }



printf("AX(Aの転置行列)は\n");
 for(i=0; i<ROW; i++)
   {
     for(j=0; j<ROW; j++)
       {
	 printf("%7.2lf",recmul[i][j]);       
       }
     printf("\n");
   }



return 0;

}
