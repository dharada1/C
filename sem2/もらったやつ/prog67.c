/*
    演習9-6
    循環リストの実現例
*/

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

#define  NO     1               /* 番号（入力・探索用）*/
#define  NAME   2               /* 氏名（入力・探索用）*/

/*--- メニュー ---*/
typedef enum {
    Term, InsFront, InsRear, RmvFront, RmvRear, PrintCrnt, RmvCrnt, SrchNo, 
    SrchName, PrintAll, Clear
} Menu;

/*--- 会員データ ---*/
typedef struct {
    int   no;                   /* 番号 */
    char  name[10];             /* 氏名 */
} Data;
    
/*--- ノード ---*/
typedef struct __node {
    Data           data;        /* データ */
    struct __node  *next;       /* 後続ノードへのポインタ */
} Node;

/*--- 循環リスト ---*/
typedef struct  {
    Node  *head;                /* 先頭ノードへのポインタ */
    Node  *tail;                /* 末尾ノードへのポインタ */
    Node  *crnt;                /* 着目ノードへのポインタ */
} List;

/*--- 一つのノードを動的に確保 ---*/
Node *AllocNode(void)
{
    return ((Node *)calloc(1, sizeof(Node)));
}

/*--- 循環リストを初期化 ---*/
void InitList(List *list)
{
    list->head = NULL;                      /* 先頭ノード */
    list->tail = NULL;                      /* 末尾ノード */
    list->crnt = NULL;                      /* 着目ノード */
}

/*--- ノードの各メンバに値を設定 ----*/
void SetNode(Node *n, Data x, Node *next)
{
    n->data = x;                            /* データ */
    n->next = next;                         /* 後続ノードへのポインタ */
}

/*--- データの番号が一致するか（探索用関数） ---*/
int NoEqual(Data x, Data y)
{
    return (x.no == y.no);
}

/*--- データの氏名が一致するか（探索用関数） ---*/
int NameEqual(Data x, Data y)
{
    return (strcmp(x.name, y.name) == 0);
}

/*--- 関数equalによってxと一致するノードを探索 ---*/
Node *SearchNode(List *list, Data x, int equal(Data x, Data y))
{
    Node  *ptr = list->head;

    while (ptr != NULL) {
        if (equal(ptr->data, x)) {      /* キー値が一致 */
            list->crnt = ptr;
            return (ptr);               /* 探索成功 */
        }
        ptr = ptr->next;                /* 後続ノードに着目 */
    }
    return (NULL);                      /* 探索失敗 */
}

/*--- 先頭にノードを挿入 ---*/
void InsertFront(List *list, Data x)
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
void InsertRear(List *list, Data x)
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

/*--- 全ノードを削除 ---*/
void ClearList(List *list)
{
    while (list->head != NULL)              /* 空になるまで */
        RemoveFront(list);                  /* 先頭ノードを削除 */
    list->crnt = NULL;
}

/*--- データの番号と氏名を表示 ---*/
void PrintData(Data x)
{
    printf("番号：%d　氏名：%s\n", x.no, x.name);
}

/*--- 着目ノードのデータを表示 ---*/
void PrintCrntNode(List *list)
{
    if (list->crnt == NULL)
        puts("着目要素はありません。");
    else
        PrintData(list->crnt->data);
}

/*--- 全ノードのデータをリスト順に表示 ---*/
void PrintList(List *list)
{
    if (list->head == NULL)
        puts("ノードがありません。");
    else {
        Node  *ptr = list->head;

        puts("【一覧表】");
        do {
            PrintData(ptr->data);
            ptr = ptr->next;                /* 後続ノードに着目 */
        } while (ptr != list->head);
    }
}

/*--- 循環リストの後始末 ---*/
void TermList(List *list)
{
    ClearList(list);                        /* 全ノードを削除 */
}

/*--- データの入力 ---*/
Data Read(const char *message, int sw)
{
    Data  temp;

    printf("%sするデータを入力してください。\n", message);

    if (sw & NO)    { printf("番号：");   scanf("%d", &temp.no);  }
    if (sw & NAME)  { printf("名前：");   scanf("%s", temp.name); }

    return (temp);
}

/*--- メニュー選択 ---*/
Menu SelectMenu(void)
{
    int   i, ch;
    char  *mstring[] = {
        "先頭にノードを挿入",   "末尾にノードを挿入",   "先頭のノードを削除",
        "末尾のノードを削除",   "着目ノードを表示",     "着目ノードを削除",
        "番号で探索",           "氏名で探索",           "全ノードを表示",
        "全ノードを削除",
    };

    do {
        for (i = Term; i < Clear; i++) {
            printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
            if ((i % 3) == 2)
                putchar('\n');
        }
        printf("( 0) 終了 ：");
        scanf("%d", &ch);
    } while (ch < Term  ||  ch > Clear);

    return ((Menu)ch);
}

/*--- メイン ---*/
int main(void)
{
    Menu  menu;
    List  list;

    InitList(&list);                            /* 循環リストの初期化 */

    do {
        Data  x;

        switch (menu = SelectMenu()) {
         case InsFront  :   x = Read("先頭に挿入", NO | NAME);
                            InsertFront(&list, x);                  break;

         case InsRear   :   x = Read("末尾に挿入", NO | NAME);
                            InsertRear(&list, x);                   break;

         case RmvFront  :   RemoveFront(&list);                     break;

         case RmvRear   :   RemoveRear(&list);                      break;

         case PrintCrnt :   PrintCrntNode(&list);                   break;

         case RmvCrnt   :   RemoveCrnt(&list);                      break;

         case SrchNo    :   x = Read("探索", NO);
                            if (SearchNode(&list, x, NoEqual) != NULL)
                                PrintCrntNode(&list);               break;

         case SrchName  :   x = Read("探索", NAME);
                            if (SearchNode(&list, x, NameEqual) != NULL)
                                PrintCrntNode(&list);               break;

         case PrintAll  :   PrintList(&list);                       break;

         case Clear     :   ClearList(&list);                       break;
        }
    } while (menu != Term);

    TermList(&list);                            /* 循環リストの後始末 */

    return (0);
}
