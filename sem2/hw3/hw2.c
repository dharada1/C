#include<stdio.h>
int main(void){
	double a[5],*p,*q,sum;
	p=a;
	sum=0;
	while( (scanf("%lf",p)) !=EOF ){
		
		sum= sum+(*p);
		p++;

		q=a;
			while(q < p){
				if(q==a){
					printf("%g ",*q);
				}
				else{
				printf("%+g ",*q);
				}
				q++;
			}
		printf("= %g\n",sum);
	}

		q=a;
			while(q < p){
				if(q==a){
					printf("%g ",*q);
				}
				else{
				printf("%+g ",*q);
				}
				q++;
			}
			printf("= %g\n",sum);
	return 0;
}