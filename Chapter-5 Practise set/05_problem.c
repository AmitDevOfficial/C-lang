// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include<stdio.h>
int sum_natural(int);

int sum_natural(int n){
    if(n == 1){
        return 1;
    }
    return sum_natural(n-1) + n;
}
int main(){
    int a = 5;
    printf("The sum of natual number are %d", sum_natural(a));
    return 0;
}