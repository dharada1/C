#include <stdio.h>


int main(void)
{
 
  char x[50];
  char *px = x;
  char y[50];
  char *py = y;
  char z[100];
  char *pz = z;
  int i,j,nx,ny;


  printf("Input first text > ");
  scanf("%s", px);

  printf("Input second text > ");
  scanf("%s", py);

  /*nx,nyは文字数*/
  nx = sizeof(px)/sizeof(*px);
  ny = sizeof(py)/sizeof(*py);

  for(i=0; i<nx; i++)
    {
    z[i]=x[i];
    }
     
  printf("てst");
 for(j=0; j<ny; j++)
       {
         z[j+i] = y[j];
       }
    
 while(*pz !='\0')
   {
     putchar(*(pz++));
   }

 putchar ('\n');


  return 0;			   
}
