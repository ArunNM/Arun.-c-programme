#include <stdio.h>
/* Function declaration */
void printEvenOdd(int cur,int limit);
int main()
{
 int lowerLimit,upperLimit;
 // Input lower and upper limit from user
 printf("Enter lower limit: ");
 scanf("%d",&lowerLimit);
 printf("Enter upper limit: ");
 scanf("%d",&upperLimit);
 printf("Even/odd Numbers from %d to %d are:",lowerLimit,upperLimit);
 printEvenOdd(lowerLimit, upperLimit); 
 return 0;
}
