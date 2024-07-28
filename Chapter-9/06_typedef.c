#include<stdio.h>
#include<string.h>

typedef struct empolyee{
    int code;
    float salary;
    char name[10];
}Emp;

int main(){
    
    Emp e1;
    strcpy(e1.name, "Amit");
    e1.code = 4450;
    e1.salary = 55.43;

    printf("Name - %s Code - %d Salary - %f", e1.name, e1.code, e1.salary);
    

    return 0;
}