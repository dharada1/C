#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[100];
  int year;
  double height;
  double weight;
  double keka;
} keisoku;


void subtotal(keisoku* k)
{

  k->keka = k->weight/((k->height/100) * (k->height/100));

}

int main(void)
{
  keisoku x[100];
  int i=0;
  int j=0;
  double hyo[100]; 
  char *himan[] = {"Light", "Normal", "Heavy1", "Heavy2", "Heavy3", "Heavy4"};

  while(printf("名前,年齢,身長,体重を入力してください > \n"), 
	(scanf ("%s", x[i].name))!=EOF)
    {
    scanf("%d", &x[i].year);
    scanf("%lf", &x[i].height);  
    scanf("%lf", &x[i].weight);  
    subtotal(&x[i]);
    i++;
    j=i;

  }

 for(i=0; i<j; i++)
   {
     hyo[i]=22*((x[i].height/100)*(x[i].height/100));
   }


 for(i=0; i<j; i++)
   {

   if(0<x[i].keka && x[i].keka<18.5)
     {
       himan[i] = "Light";
     }

   else if(18.5<=x[i].keka && x[i].keka<25 )
     {
       himan[i] = "Normal";
     }

   else if(25<=x[i].keka && x[i].keka<30)
     {
       himan[i] = "Heavy1";
     }

   else if(30<=x[i].keka && x[i].keka<35)
     {
       himan[i]= "Heavy2";
     }

   else if(35<=x[i].keka && x[i].keka<40)
     {
        himan[i]= "Heavy3";
     }
  
   else if(40<=x[i].keka)
     {
       himan[i]= "Heavy4";
     }
   }


for(i= 0; i<j; i++)
  {
printf("%10s   %4d(才)  %7.1f(cm) %5.1f(kg) BMI数値 = %5.1f 肥満度 = %10s 標準体重 %4.2f\n", 
       x[i].name, x[i].year, x[i].height, x[i].weight, x[i].keka, himan[i], hyo[i] );
  }


 return 0;

}
