/*
2. Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.
*/

#include <stdio.h>

int main()
{
    // Write File
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    int num = 4;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d\n", num * i);
    }
    fclose(ptr);

    
    // Read File
    FILE *ptr1;
    ptr1 = fopen("table.txt", "r");
    int num1;
    for (int i = 1; i <= 10; i++)
    {
        fscanf(ptr1, "%d", &num1);
        printf("%d\n", num1);
       
    }

    // Append next number in file
    FILE *ptr2;
    ptr2 = fopen("table.txt", "a");
    int num2 = 5;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr2, "%d\n", num2 * i);
    }
    fclose(ptr2);

    return 0;
}