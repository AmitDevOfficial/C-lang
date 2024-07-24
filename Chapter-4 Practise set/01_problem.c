// Write a program to print multiplication table of a given number n.
#include<stdio.h>

int main(){
    int n;
    int t;
    printf("Enter the number to the table - ", n);
    scanf("%d", &n);
    
    for(int i = 1; i<=10; i++){
        t = n * i;
        printf("%d * %i = %d\n", n, i, t);
    }
    
    return 0;
}