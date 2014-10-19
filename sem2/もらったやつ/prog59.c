#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[20];
  int age;
} Card;

typedef struct _node{
  Card           card;
  struct _node *next;
} Node;

Node *mallocNode(void){
  return((Node *)malloc(sizeof(Node)));
}

void setNode(Node *n, Card x, Node *next){
  n->card = x;
  n->next = next;
}

void insertFront( Node **root, Card x )
{
  Node *ptr = (*root);

  (*root) = mallocNode();
  setNode( (*root), x,ptr );
}


void insertRear( Node **root, Card x ){
  Node *ptr = (*root);

  if( (*root) == NULL )
    insertFront( &(*root), x);
  else{
    while( ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = mallocNode();
    setNode(ptr->next, x, NULL);
  }
}

void removeFront ( Node **root )
{
  Node *ptr;

  if( (*root) != NULL)
    ptr = (*root)->next;

  free( (*root) );
  (*root) = ptr;
}

void removeRear ( Node **root){
  Node *ptr, *pre;

  if( (*root) != NULL){
    if( (*root)->next == NULL){
      removeFront( &(*root) );
    }else{
      ptr = (*root);
      while ( ptr->next != NULL){
	pre = ptr;
	ptr = ptr->next;
      }
      pre->next = NULL;
      free( ptr );
    }
  }
}

void printNode( Card x ){
  
  printf("%20s %2d\n", x.name, x.age );
}

int main(void){
  Card card;
  Node *root = NULL, *ptr;
 

  printf("Enter name and age > ");

  while(scanf("%s %d", card.name, &card.age) !=EOF)
    {
 
  insertFront( &root, card );

  ptr = root;
  while ( ptr != NULL ) {
    printNode(ptr->card );
    ptr = ptr->next;
  }

  while ( root != NULL )
    removeFront( &root );

    }

  return (0);
}
 
