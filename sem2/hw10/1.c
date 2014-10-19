#include<stdio.h>
#include<string.h>

struct person{
	char name[20];
	int age;
	double height;
	double weight;
	double BMI;
	double standard;
	int fatstate;
};

double getBMI(struct person x){
return 10000*(x.weight)/((x.height)*(x.height));
}

double getStandard(struct person x){
return 22*(x.height)*(x.height)*0.0001;
}

double getfatstate(struct person x){
if(x.BMI<18.5)return 1;
else if(x.BMI>=18.5 && x.BMI<25)return 2;
else if(x.BMI>=25 && x.BMI<30)return 3;
else if(x.BMI>=30 && x.BMI<35)return 4;
else if(x.BMI>=35 && x.BMI<40)return 5;
else if(x.BMI>=40)return 6;
else return 0;

}

int main(void){
	struct person data[100];
	int N,i=0;
	while((scanf("%s %d %lf %lf",data[i].name,&data[i].age,&data[i].height,&data[i].weight))!=EOF){
		data[i].BMI = getBMI(data[i]);
		data[i].standard = getStandard(data[i]);
		data[i].fatstate = getfatstate(data[i]);
		i++;
	}
	N=i;

	for(i=0;i<N;i++){
		printf("%15s %3d %3.1f %3.1f %3.1f %3.1f ",data[i].name,data[i].age,data[i].height,data[i].weight,
	                                data[i].BMI,data[i].standard);
		switch(data[i].fatstate){
			case 1:
			printf("  Light");
			break;

			case 2:
			printf(" Normal");
			break;

			case 3:
			printf("Heavy 1");
			break;

			case 4:
			printf("Heavy 2");
			break;

			case 5:
			printf("Heavy 3");
			break;

			case 6:
			printf("Heavy 4");
			break;

			default:
			printf("Error!!");
			break;
		}

		printf("\n");
	}

	return 0;
}