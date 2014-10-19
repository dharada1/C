#include <stdio.h>
#include <stdlib.h>

struct BTREE {int data; struct BTREE *left; struct BTREE *right;};
void AddLeaf (struct BTREE **ptr, int newdata);
void TraverseTree (struct BTREE *ptr);

void AddLeaf (struct BTREE **ptr, int newdata) {
  if(*ptr == NULL) {
    *ptr = (struct BTREE *)malloc(sizeof(struct BTREE));
    (*ptr)->data = newdata;
    (*ptr)->left = NULL;
    (*ptr)->right = NULL;
  }else if(newdata < (*ptr)->data){
    AddLeaf(&(*ptr)->left, newdata);
  }else{
    AddLeaf(&(*ptr)->right, newdata);
  }
}

void TraverseTree(struct BTREE *ptr){
  if(ptr == NULL) {
    return; 
  } else {
    TraverseTree(ptr->left);
    printf("%2d", ptr->data);
    TraverseTree(ptr->right);
  }
}

int main( void ) {
  struct BTREE *root = NULL;
  int newdata;

  while( 1 ) {
    printf("data > ");
    scanf("%d", &newdata );
    if( newdata < 0 ) break;
    AddLeaf( &root, newdata );
    TraverseTree( root );
    putchar( '\n' );
  }
  return( 0 );
}
