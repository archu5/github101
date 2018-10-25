#include<stdio.h>

int main()
         {
           int sum = 0, n;
           //prompt user for number to check whether it is perfect or not
           printf("please enter number to check whether it is perfect or not:");
           scanf("%d", &n);
           for( int i = 1; i <= n/2; i++){
                    if( n%i == 0)  //find sum of divisors of entered number
                           sum += i;
          }
           //check if sum of divisors is equal to entered number or not and then print required output
           if( sum == n)
                 printf("hurray!,entered number is perfect\n");
           else
                 printf("number is not perfect, try another one\n");
          }