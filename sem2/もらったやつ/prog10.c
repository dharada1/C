#include <stdio.h>
#include <string.h>
#include "mydef3.h"

int main (void)
{ 
  int i;
  int keka[2];
  int kotae;
  time a[2];
  int x,y,z;



  


  for(i=0; i<2; i++)
    {
printf("時、分、秒を入力してください > \n");
    scanf("%d", &a[i].hour);
    scanf("%d", &a[i].minute);
    scanf("%d", &a[i].second);  
    }





 for(i=0; i<2; i++)
  {
    keka[i] = ( a[i].minute*60) + a[i].second + (a[i].hour*3600);
  }


if ( keka[0] > keka[1])
  {
    kotae = keka[0]-keka[1];
   }


if ( keka[0] < keka[1])
  {
    kotae = keka[1]-keka[0];
  }

x = kotae / 3600;
y = ( kotae - (x * 3600) ) / 60;
z = kotae - (x*3600) - ( y * 60);






for(i= 0; i<2; i++)
  {
  printf("%5d時 %5d分 %5d秒 = %5d秒なので\n", a[i].hour, a[i].minute, a[i].second, keka[i]);
  }


printf("%5d時%5d分%5d秒の時間差があります\n", x,y,z);

 return 0;



}
