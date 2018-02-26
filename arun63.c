#include<stdio.h>
int main()
{
int max , i , a[10] = {1,2,3,4,5,6,7,8,9,10};
max = a[0];
for( i=0 ; i<=10 ; i++)
{
if( a[i] > max)
{
max = a[i];
}
}
printf("%d\n", max);
return 0;
}
