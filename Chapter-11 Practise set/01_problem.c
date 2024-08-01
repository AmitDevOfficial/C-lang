/*
1. Write a program to dynamically create an array of size 6 capable of storing 6
integers.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 6;
    int *arr;
    arr = (int*) malloc(n*sizeof(int));
    arr[0] = 45;
    printf("%d", arr[0]);
    
    return 0;
}