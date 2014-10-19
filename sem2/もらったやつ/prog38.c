#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addition(          int a, int b){ return a+b; }
int substruction(      int a, int b){ return a-b; }
int multiplication(    int a, int b){ return a*b; }
int division(          int a, int b){ return a/b; }
int other(             int a, int b){ return   0; }

int main( void )
{
  int (*pfunc[])(int, int) = {addition, substruction, multiplication, division, other};
  int pa, pb, idx_f;
  char* opt[] = {"0.addition", "1.substruction", "2. multiplication", "3. division", "4. other"};

  while(printf("\n%s\n%s\n%s\n%s\n%s\nEnter the operation ID and values>  ",opt[0],opt[1],opt[2],opt[3],opt[4]),
	(scanf("%d %d %d", &idx_f, &pa, &pb))  != EOF )
{
  if( idx_f > 4 || idx_f < 0 ) idx_f = 4;
  printf("\n[ANSWER] %s(%d,%d) = %d\n", opt[idx_f], pa, pb, pfunc[idx_f](pa,pb));
 }

  putchar('\n');
  return 0;
}
