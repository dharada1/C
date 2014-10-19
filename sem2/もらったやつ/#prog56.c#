#include <stdio.h>
#include <stdlib.h>

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
  int a;
  int n = sizeof(meibo)/sizeof(meibo[0]);
  int t=0;

  for( i = n-1; i >= 0; i--){
    p=(Tree*)malloc(sizeof(Tree));
    p->card = meibo[i];
    p->next = root;
    root = p;
  }

  printf("How old?\n");
 

  while(scanf("%d", &a) !=EOF)
    {
      p=root;
  while(p !=NULL)
    {
      
      if(a == p->card.age)
	{
	  t++;
	  for(i=0; i<n; i++)
	    {
	  printf("%s is %d years old\n",p->card.name, p->card.age);
	  break;
	    }
	  
	}

      p = p->next;
    }
      if(t==0)
	{
	  printf("%d years not found\n",a);
	}
    }
    
 
    

  return 0;
}
