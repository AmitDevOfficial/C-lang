#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 101;
    
    struct employee amit = {100, 71.22, "Amit"};
    printf("%s %d %f", amit.name, amit.code, amit.salary);
    
    return 0;
}