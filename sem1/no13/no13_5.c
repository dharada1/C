#include <stdio.h>

int main(void){
  
  FILE *fp;
  int a[5184],z,count;
  fp=fopen("picture.dat","r");
  for (z=0;z<5184;z++){
    fscanf(fp,"%d",&a[z]);
  }
  fclose(fp);
  
  fp=fopen("runlength.dat","w");
  
  z=0;
  count=1;
  do{
    if(a[z]==a[z+1]){
      count++;
    }
    if(a[z]!=a[z+1]){
      fprintf(fp,"%d ",a[z]);
	fprintf(fp,"%d ",count);
	printf("%d",a[z]);
	printf(" %d\n",count);
	count=1;
    }
    z++;
  }while(z<=5183);
  fclose(fp);
  return 0;
}
