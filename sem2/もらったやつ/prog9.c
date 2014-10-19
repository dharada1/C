#include <stdio.h>
#include <stlib.h>

int main(void)
{
  int z;
  int *i = malloc(sizeof(int));
  if(i==NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}


  short *s = malloc(sizeof(short));
  if(s==NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}

  
  long *l = malloc(sizeof(long));
  if(l==NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}


  float *f = malloc(sizeof(float));
  if(f == NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}

 
  double *d = malloc(sizeof(double));
  if(double==NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}


  char *c = malloc(sizeof(char));
  if(i==NULL){
    fprintf(stderr,"memory allocation fault.\n");
    exit(1);}

  scanf("%d",i);
  printf("アドレス %d\n",i);
  z=sizeof(int);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *i);

scanf("%d",s);
  printf("アドレス %d\n",s);
  z=sizeof(short);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *s);

scanf("%d",l);
  printf("アドレス %d\n",l);
  z=sizeof(long);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *l);

scanf("%d",f);
  printf("アドレス %d\n",f);
  z=sizeof(float);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *f);

scanf("%d",d);
  printf("アドレス %d\n",d);
  z=sizeof(double);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *d);

scanf("%d",c);
  printf("アドレス %d\n",c);
  z=sizeof(char);
  printf("サイズ %d\n",z);
  printf("値 %d\n", *c);

  return 0;
}
