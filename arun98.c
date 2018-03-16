#include <stdio.h>
void main()
{
 int a[12] , n , sum = 0 , i;
printf("enter the number of elements");
for( i=0 ;i<=5 ; i++)
{
    scanf("%d", &a[i]);
}
printf("enter number to be add upto");
scanf("%d", &n);
for( i=0 ; i<=n ; i++)
{
   sum=sum+a[i];
}
printf("the sum is %d", sum);
}
