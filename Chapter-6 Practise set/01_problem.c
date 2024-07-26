/*
1. Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

#include<stdio.h>

int main(){
    int a = 47;
    int* ptr = &a;
    printf("The address of the value is %p\n", &a);
    printf("The address of the value is %d\n", *ptr);
    
    return 0;
}