#include <stdio.h>

int main(void){

	double *pointer,x;
	pointer=&x;

	printf("Enter a floating number > ");
	
	while( (scanf("%lf",&x)) !=EOF )
	{
		printf("%g^2 = %g\n\nEnter the next value > ",*pointer, (*pointer)*(*pointer));
	}

	printf("\n");

	return 0;
}