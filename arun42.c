#include<stdio.h>
main()
{
int a , b;
printf("enter the numbers");
scanf("%d%d", &a , &b );
a^ = b;
b^ = a;
printf("swaping num are %d%d", a , b );
}
