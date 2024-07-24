// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include<stdio.h>

int main(){
    int i = 1, sum = 0;

    //  Do while loop
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i<=10);
    // printf("The total sum to the naturals numbers are %d\n - using for loop", sum);

    //For loop
    for(i=0; i<=10; i++){
        sum += i;
    }
     printf("The total sum to the naturals numbers are %d\n - using for loop", sum);
    
    return 0;
}