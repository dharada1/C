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
    if(px[i]=='0')
    {
      *(x+i)= 'A';
    }


    else if(*(x+i)=='1')
    {
      *(x+i) = 'i';
    }
    else if(*(x+i)=='2')
    {
      *(x+i) = 'E';
    }

    else if(*(x+i)=='3')
    {
      *(x+i) = 'a';
    }

    else if(*(x+i)=='4')
    {
      *(x+i) = 'd';
    }
    else if(*(x+i)=='5')
    {
      *(x+i) = 'J';
    }

    else if(*(x+i)=='6')
    {
      *(x+i) = 'k';
    }

    else if(*(x+i)=='7')
    {
      *(x+i) = 'H';
    }

    else if(*(x+i)=='8')
    {
      *(x+i) = 'o';
    }
    else if(*(x+i)=='9')
    {
      *(x+i) = 'u';
    }
  }

  printf("%s\n", px);
    

  return 0;			   
}
