#include <stdio.h>
#include <string.h>

int addition( int a, int b){ return a+b; }
int substruction( int a, int b){ return a-b; }
int other( int a, int b){ return 0; }

int main(void){
	int (*pfunc[])(int,int)={addition,substruction,other};
	int pa, pb, idx_f;
	char* opt[]={"0.addition","1.substruction","2.other"};

	while(printf("\n%s\n%s\n%s\nEnter the operation ID and values > ", opt[0], opt[1], opt[2]),
		(scanf("%d %d %d",&idx_f,&pa,&pb)) != EOF ){
		if( idx_f > 2 || idx_f < 0 ) idx_f = 2;
		printf("\n[ANSWER] %s(%d,%d) = %d\n",
		     	opt[idx_f], pa, pb, pfunc[idx_f](pa,pb));
	} putchar('\n');
	return 0;
}