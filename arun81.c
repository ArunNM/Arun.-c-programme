#include<stdio.h>
int main()
{
int n , a , i ;
printf("enter the num \n");
scanf("%d", &n);
for(i = 2 ; i<=n/2 ; i++)
{
if(n%i == 0)
{
a = 1;
break;
}}
if(a == 0)
{
printf("prime no");
}
else
{
printf("composite num \n");
}
return 0;
}
