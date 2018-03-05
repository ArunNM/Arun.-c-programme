#include<stdio.h>
#include<string.h>
int main()
{
int i , l ;
char a[5] = "laptop";
l=strlen(a);
if(l%2 == 0)
{
a[l/2]='*';
}
else
{
a[(l-1)/2]='*';
}
for(i = 0 ; a[i]!='\0'; i++)
{
printf("the middle element is %c", a[i]);
}
return 0;
}
