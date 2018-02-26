#include<stdio.h>
int main()
{
int c , a , b;
printf("enter the num a and b\n");
scanf("%d%d", &a, &b);
c = a*b;
if(c%2==0)
{
printf("even\n");
}
else
{
printf("odd\n");
}
}
