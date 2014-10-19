#include <stdio.h>


int main(void)
{

  char px[100];
  char *x = px;
  scanf("%s", px);
  int i,n;

  n=sizeof(px);


  
for(i=0; i<n; i++)
  {
    if(px[i]=='A')
    {
      *(x+i)= '0';
    }


    else if(*(x+i)=='i')
    {
      *(x+i) = '1';
    }
    else if(*(x+i)=='E')
    {
      *(x+i) = '2';
    }

    else if(*(x+i)=='a')
    {
      *(x+i) = '3';
    }

    else if(*(x+i)=='d')
    {
      *(x+i) = '4';
    }
    else if(*(x+i)=='J')
    {
      *(x+i) = '5';
    }

    else if(*(x+i)=='k')
    {
      *(x+i) = '6';
    }

    else if(*(x+i)=='H')
    {
      *(x+i) = '7';
    }

    else if(*(x+i)=='o')
    {
      *(x+i) = '8';
    }
    else if(*(x+i)=='u')
    {
      *(x+i) = '9';
    }
  }

  printf("%s\n", px);
    

  return 0;			   
}
