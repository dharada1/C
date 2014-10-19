#include <stdio.h>


int main(void)
{

  int i,j = 0;

  char *name[] = {"Itokawa", "Kamata", "Kurihara", "Sasagawa", "Sugiyama", "Matsuda", "Watanabe", NULL};
  int histogram=0;

  while(*(name+i) !=NULL)
    {
     while (*(*(name+i)+j) !='\0')
      {
       
          histogram++;
	  j++;
	  
       }
   

     printf("%sの文字数は %dです。\n", *(name+i), histogram);
     i++;
     histogram = 0;
     j=0; 

   }


return 0;

}
