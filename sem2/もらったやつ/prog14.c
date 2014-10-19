#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  int i, n= 0;
  double a[n], *p, suma, sumb;
  p=a;

  while(scanf("%lf", (p+n)) != EOF)
    {
      suma += *(p+n);
      printf(" = %lf\n", suma);
      n++;

      for(i=0; i < n; i++)
	{
	  printf("%lf + ", *(p+i));
	}
    }

  scanf("%lf", (p+n));
  sumb = suma+*(p+n);
  printf(" = %lf\n", sumb);




return 0;
 }
