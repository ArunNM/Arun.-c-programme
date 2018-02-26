#include<stdio.h>
int main()
{
int n , rem , a;
printf("enter the num\n");
scanf("%d", &n);
while(n! = 0)
{
rem = n%10;
a = a + rem;
n = n/10;
}
printf("%d", a);
return 0;
}
