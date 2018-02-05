#include<stdio.h>
#include<conio.h>
int main()
{
 int a,d,n,i,tn;
 int  sum=0;
 printf("enter the first term value of A.P series;);
 scanf("%d",&a);
 printf("enter the total number values in A.P series);
 scanf("%d",&n);
 printf("enter the common difference of the A.P  series");
 scanf("%d",&d);
 sum = n*(2 * a + ( n - 1 ) * d ))/2;
   tn=a + (n - 1) * d;
 printf("sum of A.P series is:");
 for i=a; i<=tn; i=i+d
{
 if (i !=tn)
 printf("%d +",i);
 else("%d = %d,i,sum);
}
 return0;
}
