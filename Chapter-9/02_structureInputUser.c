#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;

    // Emplyee - 1-------------------------------------------
    printf("Enter the value of E1 name\n");
    scanf("%s", &e1.name);

    printf("Enter the value of E1 code\n");
    scanf("%d", &e1.code);

    printf("Enter the value of E1 salary\n");
    scanf("%f", &e1.salary);

    printf("%s %d %.4f\n", e1.name, e1.code, e1.salary);

    // Emplyee - 2-------------------------------------------
    printf("Enter the value of E2 name\n");
    scanf("%s", &e2.name);

    printf("Enter the value of E2 code\n");
    scanf("%d", &e2.code);

    printf("Enter the value of E2 salary\n");
    scanf("%f", &e2.salary);

    printf("%s %d %.4f\n", e2.name, e2.code, e2.salary);

    // Emplyee - 3-------------------------------------------
    printf("Enter the value of E3 name\n");
    scanf("%s", &e3.name);

    printf("Enter the value of E3 code\n");
    scanf("%d", &e3.code);

    printf("Enter the value of E3 salary\n");
    scanf("%f", &e3.salary);

    printf("%s %d %.4f\n", e3.name, e3.code, e3.salary);
    return 0;
}