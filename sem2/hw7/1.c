#include <stdio.h>
#include <string.h>

int i,j;

/*文字列をABC順に並び替える*/
void abcsort(int N, char *name[]){
char *tmp;
for(i=0;i<N-1;i++){
	for(j=0;j<N-1;j++){
		if(strcmp(*(name+j),*(name+j+1)) > 0){
			tmp = *(name+j);
      		*(name+j) = *(name+j+1);
      		*(name+j+1) = tmp;
		}
	}
}	
}

/*文字列を印字する*/
void abcprint(int N, char *name[]){
	for(i=0; i<N; i++) { 
    	if(*(name+i)== NULL)continue;
		printf("%s\n", *(name+i)); 
  	}
}

int main(void){
char *name[]={ "Yoda", "Kato", "Matsuyama", "Kudo",
				"Sato", "Izumiya", "Sugawara", "Takahashi", "Suzuki",
 				"Saito", "Endo", "Oyama", "Ito", "Nakayama", "Okuda",
		 		"Goto", "Baba", "Miyanaga", "Akiyama", "Seki", NULL };
int N=0;
  while( *(name+N) != NULL){
    N++;
  }

abcsort(N,name);
abcprint(N,name);

return 0;
}