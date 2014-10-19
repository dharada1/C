#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[15];
  int phone;
} Data;

typedef struct _node {
  Data data;
  struct _node *left;
  struct _node *right;
} Node;

int NameCompare(Data x, Data y){
  return( strcmp(x.name, y.name) );
}

Node *mallocNode( void ) {
  return( (Node *) malloc( sizeof( Node )));
}

void setNode( Node *n, Data x, Node *left, Node *right) {
  n->data = x;
  n->left = left;
  n->right = right;
}

void searchNode( Node *p, Data x) {
  int flag;

  if( p == NULL ) {
    printf("\n%s is not exist!\n\n", x.name );
    return;
  } 
 else if( (flag = NameCompare( x, p->data)) == 0) {
      printf("%15s --- %d\n", p->data.name, p->data.phone );
      return;
    }
    else if( flag < 0)
      searchNode( p->left, x);
    else
      searchNode(p->right, x);
}
    
Node *insertNode( Node *p, Data x ) {
  int flag;

  if( p== NULL ) {
    p=mallocNode();
    setNode(p,x,NULL,NULL );
  }
  else if( ( flag=NameCompare ( x,p->data ) ) == 0 ) 
    printf("\n%s is exist!\n\n", x.name );
  else if( flag < 0 )
    p->left = insertNode(p->left, x);
  else
    p->right = insertNode( p->right,x);

  return( p );
}

void freeTree(Node *p){
  if( p !=NULL ) {
    freeTree(p->left );
    freeTree(p->right );
    free( p );
  }
}

void printTree( Node *p) {
  if ( p !=NULL ) {
    printTree(p->left);
    printf("%15s --- %d\n", p->data.name, p->data.phone );
      printTree( p->right );
  }
}

int main( void )
{
  Node *root = NULL;
  Data data;

  while( printf("Enter Name and tel(5 dig) > " ),
	 scanf( "%s %d", data.name, &data.phone ) !=EOF )
    {
      root = insertNode( root, data );
      printTree( root );
    }

  putchar('\n');
  while( printf("Enter name to search in the tree > "),
	 scanf("%s", data.name) !=EOF )
    {
      searchNode(root,data);
    }

  putchar('\n');
  freeTree( root );
  return ( 0 );
}
