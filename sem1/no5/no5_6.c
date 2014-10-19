#include <stdio.h>
int main(void)
{
  int p,q,i;
  scanf("%d %d",&p,&q);
  i=1;
  do{
  if(p>q){
    p=p-q;
  }
  else if(p<q){
    q=q-p;
  }
  else if(p==q){
    break;
  }
  }while(i==1);
  printf("%d\n",p);
return 0;
}
