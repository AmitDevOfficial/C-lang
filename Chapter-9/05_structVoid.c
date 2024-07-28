#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show (struct employee e);

void show (struct employee e){
    printf("Code is -> %s %f %d", e.name, e.salary, e.code);
    
};    

int main(){
    struct employee e1;
    e1.code = 100;
    strcpy(e1.name, "Amit");
    e1.salary = 54.22;
    show(e1);

    return 0;
}