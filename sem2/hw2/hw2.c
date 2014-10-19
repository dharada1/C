#include <stdio.h>
#include <stdlib.h>
int main(void){

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

	printf("int を入力 >>");
	scanf("%d",a);
 	printf("short を入力 >>");
 	scanf("%hd",b);
	printf("long を入力 >>");
	scanf("%ld",c);
 	printf("float を入力　>>");
 	scanf("%f",d);
 	printf("double を入力 >>");
 	scanf("%lf",e);
 	printf("char を入力 >>");
 	scanf(" %c",f);


	printf("\nint型アドレス = %p\n",a);
	printf("int型領域サイズ = %ld\n", sizeof(int));
	printf("入力した値 = %d\n",*a);

	printf("short型アドレス = %p\n",b);
	printf("short型領域サイズ = %ld\n", sizeof(short));
	printf("入力した値 = %hd\n",*b);

	printf("long型アドレス = %p\n",c);
	printf("long型領域サイズ = %ld\n", sizeof(long));
	printf("入力した値 = %ld\n",*c);


	printf("float型アドレス = %p\n",d);
	printf("float型領域サイズ = %ld\n", sizeof(float));
	printf("入力した値 = %f\n",*d);

	printf("double型アドレス = %p\n",e);
	printf("double型領域サイズ = %ld\n", sizeof(double));
	printf("入力した値 = %lf\n",*e);

	printf("char型アドレス = %p\n",f);
 	printf("char型領域サイズ = %ld\n", sizeof(char));
	printf("入力した値 = %c\n\n",*f);

	free (a);
	free (b);
	free (c);
	free (d);
	free (e);
	free (f);

	return 0;
}