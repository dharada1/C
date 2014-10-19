#include<stdio.h>

struct keisoku{
	char name[20];
	int age;
	double height;
	double weight;
};

int main(){

	struct keisoku data[100],ave;
	int N,i=0;

	while(scanf("%s %d %lg %lg",data[i].name,&data[i].age,&data[i].height,&data[i].weight) == 4)i++;


	N=i;

	ave.age = 0;
	ave.height = 0;	
	ave.weight = 0;	

	for(i=0;i<N;i++){
		ave.age = ave.age + data[i].age;
		ave.height = ave.height + data[i].height;
		ave.weight = ave.weight + data[i].weight; 
	}

	ave.age = ave.age / N;
	ave.height = ave.height / N;
	ave.weight = ave.weight / N;

	for(i=0;i<N;i++)printf("%s %d %g %g\n",data[i].name,data[i].age,data[i].height,data[i].weight);

	printf("Average %d %g %g\n",ave.age,ave.height,ave.weight);

	return 0;
}