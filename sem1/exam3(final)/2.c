#include<stdio.h>

int main(void){

char a[] = "How I want a drink, alcoholic of course, after the heavy lectures involving quantum mechanics and if the lectures were boring or tiring, then any odd thinking was on quartic equations again.";

 int i,count;
 count=0;
 for(i=0;i<10000;i++){
   if(a[i]!=32&&a[i]!=0)count++;
   if(a[i]==44||a[i]==46)count--;
   if(a[i]==32){
     printf("%d\n",count);
     count=0;
   }
   if(a[i]==0){
     printf("%d\n",count);
     break;
   }
}
 return 0;
}
