#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *name;
  int age;
} Card;

typedef struct _tree{
  Card card;
  struct _tree *next;
} Tree;


 Card meibo[] = {
  {"Takahashi", 21},
  {"Kobayashi", 20},
  {"Hosokawa",  17},
  {"Sugimoto",  18},
  {"Sawai",     19},
  {"Itou",      20},
  {"Kawai",     22},
  {"Ishikura",  21},
  {"Oda",       22},
  {"Nakamura",  18}
};

int main(void) {
  Tree* root = NULL;
  Tree* p;
  int i;
  char x[10];
  int n = sizeof(meibo)/sizeof(meibo[0]);
  int t=0;

  for( i = n-1; i >= 0; i--){
    p=(Tree*)malloc(sizeof(Tree));
    p->card = meibo[i];
    p->next = root;
    root = p;
  }

  puts("name?");
 
  while(scanf("%s", x) !=EOF)
    {
      p=root;

   while(p !=NULL)
    {
      
      if(strcmp(p->card.name,x) == 0)
	{
	  t++;
	  printf("%s is %d years old\n",p->card.name, p->card.age);
	   
	}

      p = p->next;
    }    
      if(t==0)
	{
	  printf("%s not found\n",x);
	}
        puts("name?");
    
    }

    
 
    

  return 0;
}
