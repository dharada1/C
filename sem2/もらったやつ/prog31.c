#include <stdio.h> 
int main(void) 
{ 
   int i,j = 0; 
   int scan; 
   int n; 
   char *temp; 
   int tmp; 
   char *name[] = {"Itokawa", "Kamata", "Kurihara", "Sasagawa", "Sugiyama", "Matsuda", "Watanabe", NULL}; 
   int histogram[8]; 
   for(i=0; i<8; i++) 
   { 
      histogram[i] = 0; 
   } 
   for(i=0; i<8; i++) 
   { 
      j=0; 
      if(*(name+i) == NULL) 
      continue; 
      while (*(*(name+i)+j) !='\0') 
      { 
         histogram[i]++; 
         j++; 
      } 
   } 
   for(scan=0;scan<7; scan++) 
   { 
      for(n=0;n<7;n++) 
      { 
         if(histogram[n]>histogram[n+1]) 
         { 
            temp = *(name+n); 
            *(name+n) = *(name+n+1); 
            *(name+n+1)= temp; 
            tmp = histogram[n]; 
            histogram[n] = histogram[n+1]; 
            histogram[n+1] = tmp; 
         } 
      } 
   } 
   for(i=0; i<7; i++) 
   { 
      printf("%s\n", *(name+i)); 
   } 
   return 0; 
} 
