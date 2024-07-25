// 4. Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>

// Fibonacci series
//  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,.

 int fibonacci(int);

    int fibonacci(int n){
        if(n == 1 || n == 2){   //Base of the recursion
            return n-1;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }

int main(){
    int n = 8;
    printf("The fibonacci %d is the %d",n, fibonacci(n));
    return 0;
}