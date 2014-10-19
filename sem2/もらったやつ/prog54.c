#include <stdio.h>
#include <string.h>

typedef struct
{
  char *name;
  double height;
  double weight;
} Person;


Person x[] = {
  {"Tsukada", 190.6, 67.9},
  {"Shiraishi", 176.6, 67.0},
  {"Aizawa",  163.5, 45.9},
  {"Shigeya",  165.6, 76.4},
  {"Iwao",     167.6, 78.9},
  {"Miyoshi", 156.8, 98.8},
  {"Sakamoto", 159.1, 56.8},
  {"Fuakai", 145.6, 45.6},
  {"Toyota", 156.9, 65.4},
  {"Tsuji",  189.5, 90.8},
  {"Tanaka", 168.8, 45.9},
  {"Matsushima", 155.5, 78.9},
  {"Degawa", 160.2, 56.7},
  {"Kimura", 161.2, 48.5},
  {"Iwamoto", 182.5, 50.5},
  {"Kobayashi", 145.9, 45.1},
  {"Hibino", 165.4, 64.8},
  {"Furuya", 145.9, 43.1},
  {"Chiba", 155.7, 43.2},
  {"Eguchi", 172.0, 43.6},
  {"Hasegawa", 184.2, 80.5},
  {"Niioka", 167.9, 65.4},
  {"Sone", 155.4, 56.3},
  {"Tamura", 166.8, 54.1},
  {"Sugimoto", 172.1, 73.0},
  {"Sawada", 156.1, 42.8},
   {"Sasaki", 166.8, 54.1},
  {"Oe", 162.5, 45.7}
};

void my_strcmp(Person *str, int no)
  {

    int scan,n;
   Person temp;

   
 

for(scan=0; scan < no-1; scan++) 
   { 
      for(n=0; n < no-1; n++) 
      { 
	if(strcmp(str[n].name, str[n+1].name) == 1) 
         { 
            temp = str[n]; 
            str[n] = str[n+1]; 
            str[n+1] = temp; 
         } 
 
      }
   }




 for(scan=0; scan<no; scan++)
    {
       for(n=0;n<no;n++)
        {

          if(str[n].weight < str[n+1].weight)
	    {
	    temp = str[n]; 
            str[n] = str[n+1]; 
            str[n+1] = temp; 
	     }
        }
    }
  
 
  }

int main(void)
{
  int i;
  int no = sizeof(x)/sizeof(x[0]);
 
  my_strcmp(x,no);

   for(i=0; i<no; i++) 
   { 
     printf("%10s %7.1lf %7.1lf\n", x[i].name, x[i].height, x[i].weight); 
   } 

  return 0;
}
