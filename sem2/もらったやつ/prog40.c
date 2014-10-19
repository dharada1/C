#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int addition(          int a, int b){ return a+b; }
int substruction(      int a, int b){ return a-b; }
int multiplication(    int a, int b){ return a*b; }
int division(          int a, int b){ return a/b; }
int other(             int a, int b){ return   0; }

int main(int argc, char *argv[])
{

  int(*pfunc)(int, int);
  int pa, pb, i=1;
  int j;
 
char* opt[] = {"addition", "substruction", "multiplication", "division", "dummy"};
 

  while(i < argc)
    {
      if(strcmp("1", argv[i]) == 0)
	{
	pfunc = addition;
        j=0;
	}
      else if(strcmp("2", argv[i]) == 0)
        {
        pfunc = substruction; 
        j=1;
	}
      else if(strcmp("3", argv[i]) == 0)
	{
        pfunc = multiplication;
        j=2;
	}
      else if(strcmp("4", argv[i]) == 0)
	{
        pfunc = division;
        j=3;
	}
      else
	{	
        pfunc = other;
        j= 4;
	}
      pa = atoi(argv[i+1]);
      pb = atoi(argv[i+2]);
   

      printf("(%s)%s (%d,%d) = %d\n", argv[i],opt[j], pa, pb, pfunc(pa,pb));
      i +=3;
    }
  return 0;
}
