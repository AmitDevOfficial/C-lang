/*
Quick Quiz: Modify the program above to check whether the file exists or not before
opening the file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("amit.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exit Sorrry...!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fclose(ptr);
    }

    return 0;
}