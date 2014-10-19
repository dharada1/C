#include <stdio.h>

int main(void){
  
char a[] = "I am a cat. As yet I have no name. I have no idea where I was born. All I remember is that I was miaowing in a dampish dark place when, for the first time, I saw a human being. This human being, I heard afterwards, was a member of the most ferocious human species; a shosei, one of those students who, in return for board and lodging, perform small chores about the house. I hear that, on occasion, this species catches, boils and eats us.";

 int i,j,b[26];
 
 for(i=0;i<10000;i++){
   if(a[i]==0){
     break;
   }
   for(j=0;j<26;j++){
     if(a[i]==65+j||a[i]==97+j){
       b[j]++;
     }
   }
 }
 for(j=0;j<26;j++){
   printf("%c %d\n",j+97,b[j]);
 }
 return 0;
}
