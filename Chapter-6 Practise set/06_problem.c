/*
6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
*/

#include<stdio.h>

int main(){
    int i = 10;
    int* j = &i;
    int** k = &j;

    printf("The address of value is - %d\n", i);
    printf("The address of value is - %d\n", *j);
    printf("The address of value is - %d\n", **k);
    
    return 0;
}