#include <stdio.h>
#include <stdlib.h>


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
    return ; 
  } else {
    TraverseTree(ptr->left);
    printf("%d ", ptr->data);
    TraverseTree(ptr->right);
  }
}

int ExistTest(BTREE *ptr, int searchdata)
{


   if(ptr == NULL)
       {
     return (0); 
       }
   else if (searchdata == ptr->data)
     {
       return(1);
     }
   else if (searchdata < ptr->data)
     {
       return(ExistTest(ptr->left,searchdata));
     }
   else
     {
       return(ExistTest(ptr->right, searchdata));
     }
}




int main( void ) {
  BTREE *root = NULL;
  int newdata;
  int searchdata;
 
  printf("data > ");
  while(scanf("%d", &newdata )!=EOF)
    {
      if( newdata <0)break;
      AddLeaf(&root,newdata );
      TraverseTree( root );
      putchar('\n');
      printf(" data>  ");
    }


  while(printf("Enter the Value > "),
	(scanf("%d", &searchdata)!=EOF))
    {
      printf("%d\n",ExistTest(root,searchdata));
    }

  return( 0 );
}
