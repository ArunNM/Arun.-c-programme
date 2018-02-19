#include<stdio.h>
int main()
{
int n=123 , c ;
while(n!=0)
{
n = n/10;
c++;
}
printf("%d", c);
return 0;
}
