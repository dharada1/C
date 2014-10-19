#include <stdio.h>

void isort(int *vc, int no, int x)
{

  int scan;
  int n;
  int temp;

  for(scan=0;scan<no; scan++) 
   { 
     for(n=0; n < no; n++) 
      { 
         if(vc[n]>vc[n+1]) 
         { 
            temp = *(vc+n); 
            *(vc+n) = *(vc+n+1); 
            *(vc+n+1)= temp; 
            
         } 
      } 
   } 



}

int main(void){
  int i, no;
  int vc[] = {11, 42, 13, -14, 99, -76, 41, 62, -77, 15,
              51, 31, -42, 63, 69, 66, -11, 5, 29, -43 };

  no = sizeof(vc)/sizeof(vc[0]);
  isort(vc, no, 2);


 for(i=0; i<no; i++) 
   { 
      printf("%d\n", vc[i]); 
   } 
 return 0;
}
