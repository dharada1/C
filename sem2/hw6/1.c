#include<stdio.h>

int main(void){

  int j,i = 0;

  char *name[] = {"Itokawa", "Kamata", "Kurihara",
		  "Sasagawa", "Sugiyama", "Matsuda",
		  "Watanabe", NULL };

  while( name[i] ){
    printf("%s\n", name[i]);
    j=0;
    while( name[i][j] )j++;
    printf("%d\n", j);
    i++;
  }
  return 0;
}
