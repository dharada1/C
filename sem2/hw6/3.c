#include<stdio.h>
#include<string.h>

int main(void){

  int i,j,lengthtmp;

/*任意の個数の文字列を追加できる。*/
  char *name[] = {"Itokawa", "Kamata", "Kurihara",
                  "Sasagawa", "Sugiyama", "Matsuda",
                  "Watanabe", "Yoshizawa", "Kitamura", "Yamada", "Taki",
                  "David", "Michael", "Steve", "Jackie", "John",
                  "Eric", "Aile", "Elia", "Tom", "Hedy", "Ema", "Isa",
                  NULL };

  int N=1;
  i=0;
  while( *(name+i) != NULL){
    N++;
    i++;
  }

  int length[N];

  for(i=0;i<N;i++){
    length[i]=0;
  }

  for(i=0;i<N;i++){
    j=0;
    if(*(name+i) == NULL)continue;
    while( *(*(name+i)+j) ){
      j++;
      length[i]++;
    }
  }
  int chachacha;
  char *tmp;
  for(i=0;i<N-2;i++){
    for(j=0;j<N-2;j++){
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

  for(i=0; i<N-1; i++) { 
    if(*(name+i)== NULL)continue;
      printf("%s\n", *(name+i)); 
  }
  return 0;
}
