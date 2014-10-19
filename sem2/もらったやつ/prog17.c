#include <stdio.h>


int main(void)
{
  char moji[] = "Information Science";
  char *p = moji;
  int i,n;

  n = sizeof(moji);


  for(i=0; i<n-1; i++)
    {

      putchar(*(p+i));
       printf("\n");
    }

  
  return 0;			   
}
