#include <stdio.h>
#include <stdlib.h>

struct tree {
  char name[20];
  int age;
  struct tree *next;
};

int main(void) {
  struct tree* root = NULL;
  struct tree* p;

  while ( p = (struct tree *)malloc(sizeof(struct tree)),
	  scanf("%s %d", p-> name, &p-> age)!=EOF ){
    p->next = root;
    root = p;
  }
  p=root;
  while( p !=NULL){
    printf("%20s %d\n", p->name, p->age);
    p = p->next;}

  return 0;
}
