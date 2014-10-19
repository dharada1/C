#include <stdio.h>

typedef struct
{
  char *name;
  int age;
} Card;


Card meibo[] = {
  {"Takahashi", 14},
  {"Kobayashi", 15},
  {"Hosokawa",  17},
  {"Sugimoto",  18},
  {"Sawai",     19},
  {"Itou",      20},
  {"Kawai",     22},
  {"Ishikura",  24},
  {"Oda",       25},
  {"Nakamura",  28}
};

int main(void)
{
  char x;
  int head, tail, mid;
  int n=sizeof(meibo)/sizeof(meibo[0]);

  puts("name? : ");
  scanf("%c", &x);

  head = 0;
  tail = n-1;
  while(head <= tail)
    {
      mid = (head + tail ) /2;
      if(meibo[mid].age == k) break;
      if(meibo[mid].age < k)
	head = mid + 1;
      else
	tail = mid -1;
    }

  printf("age == %d is %s\n", k, (head <=tail) ? meibo[mid].name : "not found!");
  return 0;
}
