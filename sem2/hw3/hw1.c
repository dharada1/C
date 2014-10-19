#include<stdio.h>
int main(void){

	int n,i,maxi,mini;
	float max,min;

	printf("入力するデータの個数 >");

	scanf("%d",&n);

	float a[n];

	for(i=0;i<n;i++){
		scanf("%f",(a+i));
	}

	max = *a;
	min = *a;

	for(i=0;i<n;i++){
		if(max < *(a+i)){
			max = *(a+i);
			maxi = i;
		}
		if(min > *(a+i)){
			min = *(a+i);
			mini = i;
		}
	}

	printf("最大値 >%f\n%d番目\n",max,(maxi+1));
	printf("最小値 >%f\n%d番目\n",min,(mini+1));

	return 0;
}