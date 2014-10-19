#include <stdio.h>

int main(void){

double x,y,*p,*q;
p=&x;
q=&y;

scanf("%lf%lf", &x, &y);
printf("%f\n", *p + *q);

scanf("%lf%lf", p, q);
printf("%f\n", x*y);

return 0;
}