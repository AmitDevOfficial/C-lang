#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};


int main(){
    struct employee e1, e2;
    strcpy(e1.name, "Amit");
    e1.code = 45511;
    e1.salary = 54.44;

    printf("%d %s %f\n",e1.code, e1.name, e1.salary);
    
    return 0;
}