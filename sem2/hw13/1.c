#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20];
	int age;
} Card;

typedef struct _node{
	Card card;
	struct _node *next;
} Node;

Node *mallocNode(void){
	return((Node *)malloc(sizeof(Node)));
}

void setNode(Node *n, Card x, Node *next){
	n->card =x;
	n->next = next;
}

void insertFront( Node **root, Card x){
 //ポインタのポインタを受け取る
	Node *ptr = (*root);

	(*root) = mallocNode();
	setNode( (*root), x, ptr);
}

void insertRear(Node **root, Card x){
	Node *ptr = (*root);

	if((*root)==NULL)
		insertFront( &(*root), x);
	else{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next= mallocNode();
		setNode(ptr->next, x, NULL);
	}
}

void removeFront(Node **root){
	Node *ptr;
	if( (*root) != NULL)
		ptr = (*root)->next;

	free( (*root) );
	(*root) = ptr;
}

void removeRear( Node **root){
	Node *ptr, *pre;

	if((*root) != NULL){
		if((*root)->next == NULL ){
			removeFront(&(*root));
		}else{
			ptr = (*root);
			while(ptr->next != NULL){
				pre = ptr;
				ptr = ptr->next;
			}
			pre->next = NULL;
			free( ptr );
		}
	}
	
}

void printNodeAndNumber(int number,Card x){
	printf("(%2d) %20s %2d\n", number, x.name, x.age);
}

int main(){
Card card;
Node *root = NULL, *ptr;
int number;

while(scanf("%s %d", card.name, &card.age) != EOF){
	insertRear ( &root,card);

	ptr = root;
	number = 0;
	while (ptr != NULL){
		number++;
		printNodeAndNumber(number, ptr->card);
		ptr = ptr->next;
	}
	printf("\n");
}

while(root != NULL)
	removeFront(&root);

	return 0;
}