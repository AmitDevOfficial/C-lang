/*
Write a program to calculate the factorial of a given number using a for loop.
*/

#include<stdio.h>

int main(){
    // Factorial Number is like
    // 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8
    // 4! = 1 x 2 x 3 x 4 
    // 6! = 1 x 2 x 3 x 4 x 5 x 6 
    // 5! = 1 x 2 x 3 x 4 x 5 
    int product = 1, n = 4;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
        printf("%d\n", product);
        
    }
    printf("The factorial value is %d", product);
    
    return 0;
}