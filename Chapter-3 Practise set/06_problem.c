// Write a program to find greatest of four numbers entered by the user

#include<stdio.h>

int main(){
    int a = 150, b = 20, c = 3, d = 4;

    if(a>b && a>c && a>d){
        printf("The greater number is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greater number is %d", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greater number is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("The greater number is %d", d);
    }
    return 0;
}