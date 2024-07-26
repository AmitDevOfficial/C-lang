/*
3. Write a program to change the value of a variable to ten times of its current
value.
*/

#include<stdio.h>


void changeTotenTimes(int*);

void changeTotenTimes(int* x){
    *x = *x * 30;
}


int main(){
    int a = 2;
    printf("The value of a - %d\n", a);
    changeTotenTimes(&a);
    printf("The value of a - %d\n", a);
    return 0;
}