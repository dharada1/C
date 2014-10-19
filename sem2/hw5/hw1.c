#include <stdio.h>
#define N 3
int i,j,k;

double matrixmultiply(double X[N][N], double Y[N][N], double Z[N][N]){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
			*(*(Z+i)+j)+=(*(*(X+i)+k))*(*(*(Y+k)+j));
			}
		}
	}
	return 0;
}

double matrixtranspose(double X[N][N], double Y[N][N]){
for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			(*(*(Y+i)+j))=(*(*(X+j)+i));
		}
	}
	return 0;
}

int main(void){

	double A[N][N]={
		{1.0,4.0,7.0},
		{2.0,5.0,8.0},
		{3.0,6.0,9.0}},
		  AT[N][N],
		  AA[N][N],ATA[N][N];

	matrixmultiply(A,A,AA);
	matrixtranspose(A,AT);
	matrixmultiply(A,AT,ATA);

printf("A=\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %f",*(*(A+i)+j));
		}
		printf("\n");
	}
printf("AT=\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %f",*(*(AT+i)+j));
		}
		printf("\n");
	}
printf("A^2=\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %f",*(*(AA+i)+j));
		}
		printf("\n");
	}
printf("AT*A=\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %f",*(*(ATA+i)+j));
		}
		printf("\n");
	}	

	return 0;
}
