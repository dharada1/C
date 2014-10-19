#include <stdio.h>
#include <stdlib.h>

/*typedef struct {int data; struct BTREE *left; struct BTREE *right;};
void AddLeaf (struct BTREE **ptr, int newdata);
void TraverseTree (struct BTREE *ptr);*/

typedef struct __btree {
  int data;
  struct __btree *left;
  struct __btree *right;
} BTREE;


void AddLeaf (BTREE **ptr, int newdata) {
  if(*ptr == NULL) {
    *ptr = (BTREE *)malloc(sizeof(BTREE));
    (*ptr)->data = newdata;
    (*ptr)->left = NULL;
    (*ptr)->right = NULL;
  }else if(newdata < (*ptr)->data){
    AddLeaf(&(*ptr)->left, newdata);
  }else{
    AddLeaf(&(*ptr)->right, newdata);
  }
}

void TraverseTree(BTREE *ptr){
  if(ptr == NULL) {
    return; 
  } else {
    TraverseTree(ptr->left);
    printf("%2d", ptr->data);
    TraverseTree(ptr->right);
  }
}

int main( void ) {
  BTREE *root = NULL;
  int newdata;

  while(printf("data > "),
	(scanf("%d", &newdata )!=EOF))
    {
    
    AddLeaf( &root, newdata );
    TraverseTree( root );
    putchar( '\n' );
    }
  return( 0 );
}
