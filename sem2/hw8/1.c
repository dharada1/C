#include <stdio.h>
#include <string.h>

int addition( int a, int b){ return a+b; }
int substruction( int a, int b){ return a-b; }
int multiplication( int a, int b){ return a*b; }
int division( int a, int b){ return a/b; }
int dummy( int a, int b){ return 0; }

int main(void){
	int (*pfunc[])(int,int)={dummy,addition,substruction,multiplication,division};
	int pa, pb, idx_f;
	char* opt[]={"0.dummy","1.addition","2.substruction","3.multiplication","4.division"};


	printf("\n%s\n%s\n%s\n%s\n%s\nEnter the operation ID and values > ", opt[0], opt[1], opt[2], opt[3],opt[4]);
	while( (scanf("%d %d %d",&idx_f,&pa,&pb)) != EOF ){
		if( idx_f > 4 || idx_f < 0 ) idx_f = 0;
		printf("\n[ANSWER] %s(%d,%d) = %d\n",
		     	opt[idx_f], pa, pb, pfunc[idx_f](pa,pb));
	} putchar('\n');
	return 0;
}
