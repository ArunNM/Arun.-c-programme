#include<stdio.h>
#include<string.h>
int main()
{
char a[80]="ice cream";
int i , n=0;
for( i=0 ; i<a[80]; i++)
{
if(a[i]==' ')
{
n++;
}
}
printf("%d", n+1);
return 0;
}
