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


  nx=0;
  ny=0;

  while((x[nx]) != EOF)nx++;
  while((y[ny]) != EOF)nx++;

  for(i=0; i<nx; i++){
    z[i]=x[i];
    }

 for(j=0; j<ny; j++){
         z[j+i] = y[j];
       }
    
 while(*pz != EOF){
     printf("%c",*pz);
   pz++;
   }

printf("\n");


  return 0;			   
}
