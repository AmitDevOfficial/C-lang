//  Functions with call by reference
#include<stdio.h>

int sum(int*, int*);

int sum(int* a, int* b){
    *a = 220; // Function cannot change the variable directley
    return (*a + *b);
}

int main(){
    int x = 20, y = 100;

    printf("The sum of value is %d", sum(&x,&y));
    
    return 0;
}