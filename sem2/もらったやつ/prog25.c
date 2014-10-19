#include <stdio.h>
#define ROW 5


int main(void)
{
  double a[ROW][ROW];
  double mul[ROW][ROW];


  int i,j,suma;



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
	  if(j==0 && i>j)
	    {
          suma = a[i][j]-(a[i][0]/a[0][0]*a[0][j]);
	  mul[i][j] = suma;
	    } 
	  else if(i>j && j==1)
	    {
	  suma = a[i][j]-(a[i][1]/a[1][1]*a[1][j]);
	  mul[i][j] = suma;
	    } 
	  else if(i>j && j==2)
	    {
	  suma = a[i][j]-(a[i][2]/a[2][2]*a[2][j]);
	  mul[i][j] = suma;
	    } 
	  else if(i>j && j==3)
	    {
	  suma = a[i][j]-(a[i][3]/a[3][3]*a[3][j]);
	  mul[i][j] = suma;
	    } 
	  else
	    {
	      mul[i][j] = a[i][j];
	    }
	 }
    }    


  
 for(i=0; i<ROW; i++)
   {
     for(j=0; j<ROW; j++)
       {
	 printf("%7.2lf",mul[i][j]);       
       }
     printf("\n");
   }



return 0;

}
