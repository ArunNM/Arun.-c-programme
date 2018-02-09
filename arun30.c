#include<stdio.h>
int main()
{
    char str[100];
    int i,length = 0, c = 0;
    printf("enter any string ");
    scanf("%s", str);
    length = strlen(str);
    for( i = 0 ; i < length ; i++ )
    {
            if(str[i] >= 50 && str[i] <= 60)    
            {
                  c++;
            }
    }
    printf(" %d%d numbers is a string",c,length);
    return 0;
}
