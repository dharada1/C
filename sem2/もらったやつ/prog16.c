#include <stdio.h>
#define N 50

int main(void)
{
  char *ptr = "Hokkaido University", str;
  str = *ptr;

  while(*ptr !='\0')
    putchar(*(ptr++));

  putchar(*ptr);
  putchar('\n');
  return 0;
			   
 
}
