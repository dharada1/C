#include <stdio.h>


int main(void)
{
  int a[3][4];


  int i,j, d, b;
  d=0;
  i=0;

  while(i<3)
    {
     j=0;
      while(j<4)
	{
	  printf("ENTER a[%d][%d] = ",i+1,j+1);
	  scanf("%d", &a[i][j]);
	  j++;
	}
      i++;
    }


  i=0;
  while(i<3)
    {
      b = 0;
      j=0;
      for(j=0; j<4; j++);
      {
	b = b+*(*(a+i)+j);
	printf("%5d", *(*(a+i)+j));
      }
	printf("%5d\n",b);
	i++;
     }
    i=0;



printf("%5d\n", d);
return 0;;
}
