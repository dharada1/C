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
  int a;
  a=0;
  
  while(a!=5)
    {
      scanf("%d", &a);
      if(a == 1)
	{
  printf("Enter name and age > ");
  scanf("%s %d", card.name, &card.age);
printf("リストの先頭にノードを追加する\n");
  insertFront( &root, card );
	}


      else if(a == 2)
	{
  printf("Enter name and age > ");
  scanf("%s %d", card.name, &card.age);
  printf("リストの最後にノードを追加する\n");
  insertRear( &root, card );
	}

      else if(a == 3)
	{
  printf("リストの先頭にノードを削除する\n");
   removeFront( &root);
	}

      else if(a == 4)
	{
printf("リストの最後にノードを削除する\n");
  removeRear( &root );
	}
    
  ptr = root;
  while ( ptr != NULL ) {
    printNode(ptr->card );
    ptr = ptr->next;
  }
    }
  while ( root != NULL )
    removeFront( &root );

    

  return (0);
}
 
