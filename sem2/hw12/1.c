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

Card meibo[] ={
  {"Takahashi",21},
  {"Kobayashi",20},
  {"Hosokawa",17},
  {"Sugimoto",18},
  {"Sawai",19},
  {"Itou",20},
  {"Kawai",22},
  {"Ishikura",21},
  {"Oda",22},
  {"Nakamura",18}
};

int main(void){
  Tree* root = NULL;
  Tree* p;
  int i;
  int n =sizeof(meibo)/sizeof(meibo[0]);

  for(i=n-1 ; i>=0 ; i-- ){
    p=(Tree*)malloc(sizeof(Tree));
    p->card = meibo[i];
    p->next = root;
    root = p;
  }

  char NameForSearch[20];
  
  while(scanf("%s",NameForSearch)!=EOF){
    p=root;
    int count=0;
    while(p!=NULL){
      if(strcmp(NameForSearch,p->card.name) == 0){
	printf("%-20s %d\n",
	       p->card.name,p->card.age);
	count++;
      }
      p=p->next;
    }
    if(count <= 0) printf("Not Found!\n");
  }


  return 0;
}
