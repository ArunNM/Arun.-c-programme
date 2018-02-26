#include<stdio.h>
int main()
{
int n , i , a[3];
for( i=0 ; i<3 ; i++)
{
scanf("%d", &a[i]);
}
for( i=0 ; i<3 ; i++)
{
a[i] = n%10;
n = n/10;
}
printf("%d%d%d", a[0] , a[1] , a[2]);
return 0;
}
