/*
4. Write a program to illustrate the use of arrow operator → in C.
*/

#include<stdio.h>
#include<string.h>

typedef struct empolyee
{
    int code;
    float salary;
    char name[10];
}Emp;


int main(){
    Emp e1;
    Emp *ptr = &e1;
    ptr->code = 455001;
    ptr->salary = 54.2;
    strcpy(ptr->name, "Amit");

    printf("%s %d %f\n", ptr->name, ptr->code, ptr->salary);
    
    return 0;
}