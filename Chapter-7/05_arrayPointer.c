#include<stdio.h>

int main(){
    int marks[] = {33,44,55};
    // int* ptr = &marks[0];
    int* ptr = marks;

    for (int i = 0; i < 3; i++)
    {
        // printf("The value of address %d is %d\n",i, marks[i]);
        printf("The value of address %d is %d\n",i, *ptr);
        ptr++;
    }
    
    return 0;
}