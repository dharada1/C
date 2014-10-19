#include <stdio.h>
#define ROW 3
#define COL 4
         
int main(void)
{
        
          int num[ROW][COL]= { {11, 12, 13, 14},
		      {21, 22, 23, 24},
		      {31, 32, 33, 34} };
          int sum, i, j, total;

          total = 0;

 

          for (i = 0; i < ROW; i++)
          {
                    sum = 0;
                    for (j = 0; j < COL; j++)
                    {
                              sum = sum + num[i][j];

                              total = total + num[i][j];
                    }
                    num[i][COL] = sum;
          }

 

          for (i = 0; i <= ROW; i++)
          {
                    sum = 0;
                    for (j = 0; j < COL; j++)
                    {
                              sum = sum + num[j][i];

                              total = total + num[j][i];
                    }
                    num[ROW][i] = sum;
          }

 

          num[ROW][COL] = total - num[ROW][COL];

 

        
          for (i = 0; i <= ROW; i++)
          {
                    for (j = 0; j <= COL; j++)
                    {
                              printf("%3d", num[i][j]);
                    }
                    printf("\n");
          }


	  return 0;
}
