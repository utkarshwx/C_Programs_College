#include <stdio.h>

unsigned long int factorial(unsigned long int n) {

   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

unsigned long int main() {
   unsigned long int n = 31;
   int i;
   
   printf("Factorial of %lu: %lu\n" , n , factorial(n));
}