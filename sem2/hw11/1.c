#include <stdio.h>
#include <string.h>

typedef struct {
	char *name;
	double height;
	double weight;
} Person;

Person x[] = {
  {"Tsukada", 190.6, 67.9},
  {"Shiraishi", 176.6, 67.0},
  {"Aizawa",  163.5, 45.9},
  {"Shigeya",  165.6, 76.4},
  {"Iwao",     167.6, 78.9},
  {"Miyoshi", 156.8, 98.8},
  {"Sakamoto", 159.1, 56.8},
  {"Fuakai", 145.6, 45.6},
  {"Toyota", 156.9, 65.4},
  {"Tsuji",  189.5, 90.8},
  {"Tanaka", 168.8, 45.9},
  {"Matsushima", 155.5, 78.9},
  {"Degawa", 160.2, 56.7},
  {"Kimura", 161.2, 48.5},
  {"Iwamoto", 182.5, 50.5},
  {"Kobayashi", 145.9, 45.1},
  {"Hibino", 165.4, 64.8},
  {"Furuya", 145.9, 43.1},
  {"Chiba", 155.7, 43.2},
  {"Eguchi", 172.0, 43.6},
  {"Hasegawa", 184.2, 80.5},
  {"Niioka", 167.9, 65.4},
  {"Sone", 155.4, 56.3},
  {"Tamura", 166.8, 54.1},
  {"Sugimoto", 172.1, 73.0},
  {"Sawada", 156.1, 42.8},
  {"Sasaki", 166.8, 54.1},
  {"Oe", 162.5, 45.7}
};

void SortByABC(Person data[],int start,int end);
void SortByHeight(Person data[],int start,int end);
void SortByWeight(Person data[],int start,int end);
void PrintPerson(Person data[],int start,int end);

void SortByABC(Person data[],int start,int end){
int i,j;
char *tmp;
for(i=start;i<end-1;i++){
	for(j=start;j<end-1;j++){
		if(strcmp(data[j].name,data[j+1].name)>0){
			tmp = data[j].name;
			data[j].name = data[j+1].name;
			data[j+1].name = tmp;
		}
		else if(strcmp(data[j].name,data[j+1].name)==0){
			SortByHeight(data,j,j+1);
			//名前が同一の場合は、身長の昇順により並べ替える
		}
	}
}
}

void SortByHeight(Person data[],int start,int end){
int i,j;
double tmp;
for(i=start;i<end-1;i++){
	for(j=start;j<end-1;j++){
		if(data[j].height > data[j+1].height){
			tmp = data[j].height;
			data[j].height = data[j+1].height;
			data[j+1].height = tmp;
		}
		else if(data[j].height == data[j+1].height){
			SortByABC(data,j,j+1);
			//身長が同一の場合は、アルファベット順に並べ替える
		}
	}
}
}

void SortByWeight(Person data[],int start,int end){
int i,j;
double tmp;
for(i=start;i<end-1;i++){
	for(j=start;j<end-1;j++){
		if(data[j].weight > data[j+1].weight){
			tmp = data[j].weight;
			data[j].weight = data[j+1].weight;
			data[j+1].weight = tmp;
		}
		else if(data[j].weight == data[j+1].weight){
			SortByABC(data,j,j+1);
			//体重が同一の場合は、アルファベット順に並べ替える
		}
	}
}
}

void PrintPerson(Person data[],int start,int end){
int i;
for(i=start;i<end;i++){
	printf("%10s %4.1lf %3.1lf\n",data[i].name,data[i].height,data[i].weight);
}
}



int main(){
	int number = sizeof(x)/sizeof(x[0]);

	printf("アルファベット順にソート\n");
	SortByABC(x,0,number);
	PrintPerson(x,0,number);

	printf("身長昇順にソート\n");
	SortByHeight(x,0,number);
	PrintPerson(x,0,number);

	printf("体重昇順にソート\n");
	SortByWeight(x,0,number);
	PrintPerson(x,0,number);

	return 0;
}