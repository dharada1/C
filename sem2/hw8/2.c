#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sina(double a){ return sin(a * PI / 180.0); }
double cosa(double a){ return cos(a * PI / 180.0); }
double tana(double a){ return tan(a * PI / 180.0); }

int main(void){
	double (*pfunc[])()={sina,cosa,tana};
	double pdeg;
	int idx_f;
	char* opt[]={"0.sin","1.cos","2.tan"};
printf("%s\n%s\n%s\n", opt[0],opt[1],opt[2]);
	while( (scanf("%d %lf",&idx_f, &pdeg)) != EOF ){
		if( idx_f > 2 || idx_f < 0 )printf("関数を打ち直してください\n");
		printf("\n[ANSWER] %s(%lf) = %lf\n",
		     	opt[idx_f], pdeg, pfunc[idx_f](pdeg));
	} putchar('\n');
	return 0;
}