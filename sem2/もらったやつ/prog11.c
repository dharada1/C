#include <stdio.h>
#include <string.h>
#include "mydef2.h"

int main (void)
{ 
  int i,j;
  keisoku a[100];
  int allyear=0;
  double alltall=0;
  double allomosa=0;
  double heiyear, heitall, heiomosa;


  i = 0;

  j = 0;

  while(printf("名前、年齢、身長、体重を入力してください > \n"), 
	(scanf ("%s", a[i].name))!=EOF)
    {
    scanf("%d", &a[i].year);
    scanf("%lf", &a[i].tall);
    scanf("%lf", &a[i].omosa);  
    i++;
    j=i;
  }


 for(i=0; i<j; i++)
  {
    allyear+= a[i].year;
  }

 heiyear = allyear / j;


 for(i=0; i<j; i++)
   {
     alltall+=a[i].tall;
   }

 heitall = alltall / j;


for(i=0; i<j; i++)
   {
     allomosa+=a[i].omosa;
   }

 heiomosa = allomosa/j;


 

for(i= 0; i<j; i++)
  {
printf("%10s   %4d(才)  %7.1f(cm) %5.1f(kg) \n", 
       a[i].name, a[i].year, a[i].tall, a[i].omosa);
  }

 printf("-----------------------------------------------\n 総人数 %3d(名)\n 平均 %12.1f(才) %7.1f(cm) %5.1f(kg)\n", j, heiyear, heitall, heiomosa);



 return 0;



}
