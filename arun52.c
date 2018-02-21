#include<stdio.h>
int main()
{
int a[7] , i , sum;
int avg;
printf("enter the elements\n");
for( i=0 ; i<7 ; i++)
{
scanf("%d",&a[i]);
}
for( i=0 ; i<7 ; i++)
{
sum = sum+a[i];
}
avg = sum/7;
printf("%d",avg);
return 0;
}
