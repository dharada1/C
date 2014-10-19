#include <stdio.h>
int main(void){
  FILE *fp;
  int j,moji,length,count;
  fp=fopen("runlength.dat","r");
  count=0;
  while( fscanf(fp,"%d",&moji) !=EOF){
    fscanf(fp,"%d",&length);
    for(j=0;j<length;j++){
      printf("%c",moji);
      count++;
      if(count%72==0)printf("\n");
    }
  };
  fclose(fp);
  return 0;
}
