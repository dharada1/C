#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define defaultmylife 100 //自分のポイントの初期値
#define defaulthislife 100 //相手のポイントの初期値

int mylife=defaultmylife;
int hislife=defaulthislife;

int jan(int myhand){
  int hishand;
  hishand = rand()%3+1;  
  if (myhand == 1){
    if (hishand == 1){
      printf("相手はぐーを出した\n");
      printf("あいこ\n");
    }
    if (hishand == 2){
      printf("相手はちょきを出した\n");
	printf("あなたの勝ち\n");
	hislife = hislife - 10;
    }
    if (hishand == 3){
      printf("相手はぱーを出した\n");
      printf("相手の勝ち\n");
      mylife = mylife - 10;
    }
    
  }
  else if (myhand == 2){
    if (hishand == 1){
      printf("相手はぐーを出した\n");
      printf("相手の勝ち\n");
      mylife = mylife - 10;
    }
    if (hishand == 2){
      printf("相手はちょきを出した\n");
      printf("あいこ\n");
    }
    if (hishand == 3){
      printf("相手はぱーを出した\n");
      printf("あなたの勝ち\n");
      hislife = hislife - 10;
    }
  }
  
  else if (myhand == 3){
    if (hishand == 1){
      printf("相手はぐーを出した\n");
      printf("あなたの勝ち\n");
      hislife = hislife - 10;
    }
    if (hishand == 2){
      printf("相手はちょきを出した\n");
      printf("相手の勝ち\n");
      mylife = mylife - 10;
    }
    if (hishand == 3){
      printf("相手はぱーを出した\n");
      printf("あいこ\n");
    }
  }
  return 0;
}

int main(void){

  int myhand;

srand((unsigned) time(NULL));

  
  printf("----------------------------\n");
  printf("***じゃんけんゲーム***\nじゃんけんに負けるとポイントが10減る。\nポイントが0になるとゲームは終了する。\n");
  while(mylife >0 && hislife >0){
    
    
    printf("----------------------------\n");
printf("あなたのポイントは%d\n", mylife);
printf("あいてのポイントは%d\n", hislife); 
printf("ぐーは1、ちょきは2、ぱーは3を入力してください\n");  
scanf("%d",&myhand);
jan(myhand);
  }

printf("----------------------------\n");
printf("あなたのポイントは%d\n", mylife);
printf("あいてのポイントは%d\n", hislife);

FILE *fp; 
 fp=fopen("kekka.dat","w");//kekka.datを出力する。勝ち+1,負け-1,引き分け0.

 if(mylife == 0 && hislife == 0){
printf("ひきわけだ。\n");
 fprintf(fp,"0");
 }
 if(mylife == 0 && hislife != 0){
printf("負けてしまった。\n");
fprintf(fp,"-1");
 }
 else if(hislife == 0 && mylife != 0){
printf("こっちの勝ちだ!!!\n");
fprintf(fp,"+1");
 }
 fclose(fp);
printf("おわり！\n");
return 0;
}
