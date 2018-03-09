#include<stdio.h>
int main()
{
char a[10];
int flag = 0 , i;
printf("enter string \n");
scanf("%c", &a);
for(i=0 ; a[i]!='\0'; i++)
{
if(a[i]==a[i+1])
{
flag = 0;
break;
}}
if(flag == 1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
