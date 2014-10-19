#include<stdio.h>
#include<string.h>

int main(void){

  int i,j,lengthtmp,length[8];

  char *name[] = {"Itokawa", "Kamata", "Kurihara",
                  "Sasagawa", "Sugiyama", "Matsuda",
                  "Watanabe", NULL };

  for(i=0;i<8;i++){
    length[i]=0;
  }

  for(i=0;i<8;i++){
    j=0;
    if(*(name+i) == NULL)continue;
    while( *(*(name+i)+j) ){
      j++;
      length[i]++;
    }
  }
  int chachacha;
  char *tmp;
  for(i=0;i<6;i++){
    for(j=0;j<6;j++){
      if(length[j]>length[j+1]){
        tmp = *(name+j);
        *(name+j) = *(name+j+1);
        *(name+j+1) = tmp;

        lengthtmp = length[j];
        length[j] = length[j+1];
        length[j+1] = lengthtmp;
      }

      if(length[j]==length[j+1] && strcmp(*(name+j),*(name+j+1)) > 0){
          tmp = *(name+j);
          *(name+j) = *(name+j+1);
          *(name+j+1) = tmp;
          lengthtmp = length[j];
          length[j] = length[j+1];
          length[j+1] = lengthtmp;
        }
    }
  }   

  for(i=0; i<7; i++) { 
    if(*(name+i)== NULL)continue;
      printf("%s\n", *(name+i)); 
  }
  return 0;
}
