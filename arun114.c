#include <stdio.h>
  int main() 
  {
    int a[10];
    int i;
    int smallest;
    printf("Enter ten values:");
    for (i=0; i<10; i++)
    {
    scanf("%d\n", &a[i]);
    }
    smallest = a[0];
    for (i=0; i<10; i++)
    {
if (a[i] < smallest)
{
smallest = a[i];
    }
    }
    printf("smallest of ten numbers is %d\n", smallest);
    return 0;
  }
