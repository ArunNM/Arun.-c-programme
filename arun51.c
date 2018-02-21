#include<stdio.h>
int main()
{
int a[6] , i , lar=0 , sma=0 , n=6 ;
for( i=0 ; i < n ; i++)
{
scanf("%d", &a[i]);
}
lar = sma = a[0];
for( i=0 ; i<n ; i++)
{
if(a[i]>lar)
{
lar = a[i];
}
if(a[i]<sma)
{
sma = a[i];
}
}
printf("%d",lar\n);
printf("%d",sma\n);
return 0
}
