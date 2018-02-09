#include<stdio.h>
main()
{
int h, h1=5 , h2=4 , m , m1 = 50 , m2=40;
printf("\n enter the hours and min");
scanf("%d%d%d%d",&h1,&h2,&m1,&m2);
h = h1-h2;
m= m1 - m2;
printf("%d\t%d",h,m);
}
