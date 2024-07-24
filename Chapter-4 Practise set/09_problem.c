// Repeat 8 using while loop.
#include<stdio.h>

int main(){
   int product = 1;
   int n = 5;
   int i = 1;
   while (i<=n)
   {
    product *= i;
    i++;
   }
   printf("The factorial value is %d", product);
    
    return 0;
}