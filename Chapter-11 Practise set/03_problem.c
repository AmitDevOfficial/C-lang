/*
3. Solve problem 1 using calloc().s
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 6;
    int *arr;
    arr = (int*) calloc(n, sizeof(int));
    arr[0] = 45;
    printf("%d", arr[0]);
    
    return 0;
}