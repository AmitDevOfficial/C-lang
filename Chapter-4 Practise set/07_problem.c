/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the number to the table - ", n);
    scanf("%d", &n);
    
    for(int i = 1; i<=10; i++){
        sum += (n * i);
    }
  
    printf("The total multiplication table sum is %d", sum);
    
    return 0;
}