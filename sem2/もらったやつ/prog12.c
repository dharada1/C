#include <stdio.h>
#include <string.h>


typedef struct{
  char name[100];
  int number;
  int price;
  int keka;

} shohin;


void subtotal(shohin* k)
{

  k->keka = k->price * k->number;


}

int main(void)
{
  shohin x[100];
  int i,j;
  int allprice = 0;
  int allnum = 0;




  i = 0;
  j = 0;
 

  while(printf("商品名、数、値段を入力してください > \n"), 
	(scanf ("%s", x[i].name))!=EOF)
    {
    scanf("%d", &x[i].number);
    scanf("%d", &x[i].price);  
    subtotal(&x[i]);
    i++;
    j=i;

  }


 for(i=0; i<j; i++)
   {
     allnum+=x[i].number;
   }


 for(i=0; i<j; i++)
   {
     allprice+=x[i].keka;
   }


for(i= 0; i<j; i++)
  {
printf("%10s   %10d x %6d Yen = %6d YEN\n", 
       x[i].name, x[i].number, x[i].price, x[i].keka);
  }


 printf("-----------------------------------------------\nTotal amount & price : %3d%20d\n", allnum, allprice);



 return 0;



}
