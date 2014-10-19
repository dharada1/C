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

  printf("0. addition\n 1.substruction\n 2. multiplicaiton\n 3. division\n 4. other\n");


  while(i < argc)
    {
      if(strcmp("0", argv[i]) == 0)
	pfunc = addition;
      else if(strcmp("1", argv[i]) == 0)
        pfunc = substruction;
      else if(strcmp("2", argv[i]) == 0)
	pfunc = multiplication;
      else if(strcmp("3", argv[i]) == 0)
	pfunc = division;
      else
	pfunc = other;

      pa = atoi(argv[i+1]);
      pb = atoi(argv[i+2]);
   

      printf("%s(%d,%d) = %d\n", argv[i], pa, pb, pfunc(pa,pb));
      i +=3;
    }
  return 0;
}
