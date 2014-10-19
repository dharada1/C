#include <stdio.h>
#define N 50

int main(void)
{
  int i, ns = 0;
  char moji[N], inv[N];

  printf("Input text > ");
  scanf("%s", moji);

  while(moji[ns]!='\0')    ns++;

  for(i=0; i<ns; i++)
			   
    
    inv[i] = moji[ns-i-1];
  inv[ns] = moji[ns];
			   
  printf("Inversed text : %s\n", inv);
  return 0;
}
