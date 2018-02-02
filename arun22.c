#include<stdio.h>
int main()
{
inti,f=1,num;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
f=f*i;
printf("Factorial of %d is:%d",num,f);
return 0;
}
