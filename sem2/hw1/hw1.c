#include <stdio.h>

int main(void){

	int i,j,*ip,*jp,gapa,gapb;

	ip=&i;
	jp=&j;

	printf("ipとjpに対して数値データを入力\n");
	scanf("%d",ip);
	scanf("%d",jp);

	gapa=i-j;
	if(gapa<0){
		gapa=-gapa;
	}
	printf("iとjから求めた差の絶対値は%d\n",gapa);

	gapb=*ip-*jp;
	if(gapb<0){
		gapb=-gapb;
	}
	printf("ipとjpから求めた差の絶対値は%d\n",gapb);

	return 0;
}