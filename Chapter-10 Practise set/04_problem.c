/*
4. Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    char name[30];
    int salary;
    ptr = fopen("employee.txt", "w");


    printf("Enter your Name - \n");
    scanf("%s", name);

    printf("Enter your salary  - \n");
    scanf("%d", &salary);

    fprintf(ptr, "%s\n", name);
    fprintf(ptr, "%d\n", salary);

    return 0;
}