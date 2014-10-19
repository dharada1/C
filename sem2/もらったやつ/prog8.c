#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *a;
  short *b;
  long *c;
  float *d;
  double *e;
  char *f;

a = malloc( sizeof(int));
b = malloc( sizeof(short));
 c = malloc( sizeof(long));
d = malloc( sizeof(float));
e = malloc( sizeof(double));
f = malloc( sizeof(char));


 printf("Enter the value a(int)>>");
 scanf("%d",a);
 printf("Enter the value b(short)>>");
 scanf("%hd",b);
 printf("Enter the value c(long)>>");
 scanf("%ld",c);
 printf("Enter the value d(float)>>");
 scanf("%f",d);
 printf("Enter the value e(double)>>");
 scanf("%lf",e);
 printf("Enter the value f(char)>>");
 scanf("%s",f);

 printf("int型アドレス = %p\n",a);
 printf("int型領域サイズ = %d\n", sizeof(int));
 printf("入力した値 = %d\n",*a);

 printf("short型アドレス = %p\n",b);
 printf("short型領域サイズ = %d\n", sizeof(short));
 printf("入力した値 = %hd\n",*b);

 printf("long型アドレス = %p\n",c);
 printf("long型領域サイズ = %d\n", sizeof(long));
 printf("入力した値 = %ld\n",*c);


 printf("float型アドレス = %p\n",d);
 printf("float型領域サイズ = %d\n", sizeof(float));
 printf("入力した値 = %f\n",*d);

 printf("double型アドレス = %p\n",e);
 printf("double型領域サイズ = %d\n", sizeof(double));
 printf("入力した値 = %lf\n",*e);


 printf("char型アドレス = %p\n",f);
 printf("char型領域サイズ = %d\n", sizeof(char));
 printf("入力した値 = %c\n",*f);

 return 0;
}



