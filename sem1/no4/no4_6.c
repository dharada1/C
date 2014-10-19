#include <stdio.h>

int main(void)
{
  int a;
  scanf("%d",&a);
  switch (a%12){
  case 0 :printf("%d年は申年です\n",a);break;
  case 1 :printf("%d年は酉年です\n",a);break;
  case 2 :printf("%d年は戌年です\n",a);break;
  case 3 :printf("%d年は亥年です\n",a);break;
  case 4 :printf("%d年は子年です\n",a);break;
  case 5 :printf("%d年は丑年です\n",a);break;
  case 6 :printf("%d年は寅年です\n",a);break;
  case 7 :printf("%d年は卯年です\n",a);break;
  case 8 :printf("%d年は辰年です\n",a);break;
  case 9 :printf("%d年は巳年です\n",a);break;
  case 10 :printf("%d年は午年です\n",a);break;
  case 11 :printf("%d年は未年です\n",a);break;
  }
  return 0;
}
