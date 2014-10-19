#include <stdio.h> 
#include <string.h>  

void my_strcmp(char *str[], int no) 
{ 

   int scan; 
   int n; 
   char *temp; 

   
 for(scan=0; scan < no-1; scan++) 
    { 
       for(n=0; n < no-1; n++) 
         { 
           if(strcmp(str[n],str[n+1]) == 1) 
             { 
	       temp = *(str+n); 
	       *(str+n) = *(str+n+1); 
               *(str+n+1) = temp; 
             } 
          } 
    } 

} 


int main(void) 

 { 

  int i, no; 
  char *name[] = { "Yoda", "Kato", "Matsuyama", "Kudo", "Saot", "Izumiya", "Ugawara", "Takahashi", "Suzuki", "Saito", "Endo", "Oyama", "Ito", "Nakayama", "Okuda", "Goto", "Baba", "Miyanaga", "Akiyama", "Seki"}; 

  no = sizeof(name)/sizeof(name[0]); 
  my_strcmp(name, no); 



  for(i=0; i<no; i++) 
   { 
    printf("%s\n", *(name+i)); 
   } 

return 0; 

 } 

