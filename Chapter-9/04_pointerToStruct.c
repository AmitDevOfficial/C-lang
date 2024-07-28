#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1;
    e1.code = 100;

    struct employee *ptr;   
    ptr = &e1;
   
    // printf("%d", (*ptr).code);
    printf("%d",ptr->code); // Excately same as this (*ptr).code but they also give the same result this is arrow operator
    
    return 0;
}