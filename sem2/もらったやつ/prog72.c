#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int num;
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

typedef struct {
  Node *head;
  Node *tail;
  Node *crnt;
}List;

  void InitList(List *list)
  {
    list->head = NULL;
    list->tail = NULL;
    list->crnt = NULL;
  }

void setNode(Node *n, Card x, Node *next){
  n->card = x;
  n->next = next;
}

void InsertFront(List *list, Card x)
{
    if (list->head == NULL) {
        list->head = list->tail = list->crnt = AllocNode();
        SetNode(list->head, x, list->head);
    } else {
        Node  *ptr = list->head;
        list->head = list->crnt = AllocNode();
        SetNode(list->head, x, ptr);
        list->tail->next = list->head;
    }
}

/*--- 末尾にノードを挿入 ---*/
void InsertRear(List *list, Card x)
{
    if (list->head == NULL)                 /* 空であれば */
        InsertFront(list, x);               /* 先頭に挿入 */
    else {
        Node  *ptr = list->tail;
        ptr->next = list->crnt = list->tail = AllocNode();
        SetNode(ptr->next, x, list->head);
    }
}

/*--- 先頭ノードを削除 ---*/
void RemoveFront(List *list)
{
    if (list->head != NULL) {
        if (list->head == list->tail) {         /* ノードが一つだけであれば */
            free(list->head);
            list->head = list->tail = list->crnt =NULL;
        } else {
            Node  *ptr = (list->head)->next;
            free(list->head);
            list->head = list->crnt = ptr;
            list->tail->next = list->head;
        }
    }
}

/*--- 末尾ノードを削除 ---*/
void RemoveRear(List *list)
{
    if (list->head != NULL) {
        if (list->head == list->tail)       /* ノードが一つだけであれば */
            RemoveFront(list);              /* 先頭ノードを削除 */
        else {
            Node  *ptr = list->head;
            Node  *pre;

            do {
                pre = ptr;
                ptr = ptr->next;
            } while (ptr != list->tail);
            pre->next = list->head;         /* preは末尾から2番目 */
            free(ptr);                      /* ptrは末尾*/
            list->crnt = list->tail = pre;
        }
    }
}

/*--- 着目ノードを削除 ---*/
void RemoveCrnt(List *list)
{
    if (list->head != NULL) {
        if (list->crnt == list->head)       /* 先頭ノードに着目していれば */
            RemoveFront(list);              /* 先頭ノードを削除 */
        else if (list->crnt == list->tail)  /* 末尾ノードに着目していれば */
            RemoveRear(list);               /* 末尾ノードを削除 */
        else {
            Node  *ptr = list->head;

            while (ptr->next != list->crnt)
                ptr = ptr->next;
            ptr->next = list->crnt->next;
            free(list->crnt);
            list->crnt = ptr;
        }
    }
}


void printNode( Card x ){
  printf("(%d)%15s %9d\n",x.num, x.name, x.age );
}

int main(void){
  Card card;
  Node *root = NULL, *ptr;
  int i;
  int a;
  i = 1;
 
  char buf[80];

  printf("Enter Name and Age > \n");

  while(scanf("%s %d", card.name, &card.age)!=EOF)
    {

      card.num = i;

      insertRear(&list,card);

      fgets( buf, sizeof(buf), stdin);

      if( feof(stdin)){
    break;
      }

      if(ferror(stdin)){
    fputs("ファイルの読み取りに失敗しました。 \n", stderr );
    exit( EXIT_FAILURE );
      }

      fputs( buf, stdout );
      i++;
    
    }


  ptr = root;
 printf("No.           Name       Age\n--------------------------------\n");
  while ( ptr != NULL ) {
    printNode(ptr->card );
    ptr = ptr->next;
  }
    
 
    
  while ( root != NULL )
    removeFront( &list );


   while(printf("Enter the Age > \n"),
         (scanf("%d", &a))!=EOF)
    {

 Node *ptr, *pre;

            if(card.age == a)
       {
         removeCrnt(&list);
       }

    pre = ptr;
    ptr = ptr->next;
      
      pre->next = NULL;
      free( ptr );
 
  ptr = root;

 printf("No.           Name       Age\n--------------------------------\n");
  while ( ptr != NULL )
    {
    printNode(ptr->card );
    ptr = ptr->next;
    }

    }
    
  while ( root != NULL )
    removeFront( &list );



       

  return (0);
}
