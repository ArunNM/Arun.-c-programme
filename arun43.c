#include<stdio.h>
int main()
{
int a[10] , c , n , i , count;
printf("enter the count");
scanf("%d", &n);
printf("enter 10 values");
for( i = 0 ; i < 10 ; i++ )
{
scanf("%d", &a[i]);
}
if( a[i]>=c )
{
c = a[i];
}
else
{
count++;
}
printf("greatest num is %d",c);
}
return 0;
}
