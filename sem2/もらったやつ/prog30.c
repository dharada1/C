#include <stdio.h>
int main(void)
{

  int i,j = 0;
  char *name[] = {"Itokawa", "Kamata", "Kurihara", "Sasagawa", "Sugiyama", "Matsuda", "Watanabe", NULL};

  int histogram[8];
  for(i=0; i<8; i++)
    {
      histogram[i] = 0;
    }
 


 for(i=0; i<7; i++)
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



 for(i=0; i<7; i++)
   {
 
     printf("%sの文字数は %dです。\n", *(name+i), histogram[i]);

   }


return 0;

}
