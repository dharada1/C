#include <stdio.h>


int main(void)
{
  int a[3][4] = { {11, 12, 13, 14},
		      {21, 22, 23, 24},
		      {31, 32, 33, 34} };


  int i,j, b;



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



return 0;;
}
