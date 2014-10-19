#include <stdio.h>


int main(void)
{

  int i = 0;

  char *month[] = {
    "January", "Februrary", "March", "April", 
    "May", "June", "July", "August", "September",
    "October", "November", "December", NULL};
 

  for(i=0; i<12; i++)
   {
     if  (*(*(month+i)+0) == 'A'|| *(*(month+i)+0)  == 'M')
       {
	 printf("%s\n", *(month+i));
        }
     
   }





return 0;

}
