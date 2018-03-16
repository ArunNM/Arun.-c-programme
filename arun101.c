#include<stdio.h>
void main()
{
int pr , r , t , a , b;
printf("simple ineretst calculation give principle,rate and time");
scanf("%d%d%d", &pr , &r , &t);
a = (1+r*t);
b = pr*a;
printf("%d",b);
}
