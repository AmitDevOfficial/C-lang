// Write a program to print multiplication table of 10 in reversed order

#include<stdio.h>

int main(){
    int n;
    int t;
    printf("Enter the number to the table - ", n);
    scanf("%d", &n);
    
    for(int i = 10; i; i--){
        t = n * i;
        printf("%d * %i = %d\n", n, i, t);
    }
    
    return 0;
}