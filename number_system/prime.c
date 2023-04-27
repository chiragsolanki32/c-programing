#include <stdio.h>

int main() { 
   int num, number;
   int prime = 1;
   
   number = 11;

   for(num = 2; num < number; num++) {
      if((number % num) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.\n", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}