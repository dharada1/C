#include <stdio.h>
#include <string.h>

typedef struct
{
  char *name;
  int age;
} Card;


Card meibo[] = {
  {"Takahashi", 14},
  {"Kobayashi", 15},
  {"Hosokawa",  17},
  {"Sugimoto",  18},
  {"Sawai",     19},
  {"Itou",      20},
  {"Kawai",     22},
  {"Ishikura",  24},
  {"Oda",       25},
  {"Nakamura",  28}
};

void my_strcmp(char *x, int no) 

{ 

   int head;


  head = 0;
  
  while(head < no)
    {
      if(strcmp(meibo[head].name, x) == 0) 
	{
	  printf("%s is %d years old\n", meibo[head].name, meibo[head].age);
         break;
	}

      head++;
      
    }
  if(head == no)
    {
      printf("not found\n");
    }

}

int main(void)
{
  char x[10];
  int no = sizeof(meibo)/sizeof(meibo[0]);

  puts("name? : ");
  scanf("%s", x);
  my_strcmp(x, no);


  return 0;
}
