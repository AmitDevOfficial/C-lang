//  Functions with call by value
#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    a = 20; // Function cannot change the variable directley
    return a+b;
}

int main(){
    int x = 20, y = 100;
    printf("The sum of value is %d", sum(x,y));
    
    return 0;
}