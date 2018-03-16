#include<stdio.h>
void main()
{
 int n , l;
 int i = 1;
 printf("enter a number");
 scanf("%d", &n);
 while(n > 0)
 {
   l = n%10;
   n = n/10;
   i = l*i;
 }
 printf("%d", i);
}
