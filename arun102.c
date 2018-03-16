#include <stdio.h>
int main(void) 
{
	int num , i;
	printf("enter the num\n");
	scanf("%d", &num);
	for(i=2 ; i<=num ; i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(num==i)
	{
		printf("not composite");
	}
	else
	printf("composite num");
	return 0;
}
