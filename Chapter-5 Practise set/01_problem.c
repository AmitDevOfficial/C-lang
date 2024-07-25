// 1. Write a program using function to find average of three numbers.
#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3;
}

int main(){
    int a = 5, b = 10, c = 15;
    printf("The total sum of average is %2f", average(a, b ,c));
    return 0;
}