#include<stdio.h>
main()
{
int i , s;
char x[10]="rose";
for( i=0 ; x[i]<=0 ; i++ )
{
if(x[i]==' ')
{
s++;
}
}
printf("the space in string is %d",s);
}
