#include<stdio.h>
int main()
{
int a = 50 , b = 60;
a = a^b;
b = a^b;
a = a^b;
printf("after swapping%d%d\n ", a , b);
return 0;
}
