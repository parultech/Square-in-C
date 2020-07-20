#include <stdio.h>

double squareRoot(double n) {
   double i, precision = 0.00001;

   for(i = 1; i*i <=n; ++i);           //Integer part

   for(--i; i*i < n; i += precision);  //Fractional part

   return i;
}

int main() {
   int n = 24;

   printf("Square root of %d = %lf", n, squareRoot(n));

   return 0;
}
