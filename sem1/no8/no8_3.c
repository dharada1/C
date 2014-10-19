#include <stdio.h>
int gcd(int p,int q)
{
  int i=1;
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
  
  return p;
}

int main(void)
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=gcd(a,b);
  printf("%d\n",c);
  return 0;
}
