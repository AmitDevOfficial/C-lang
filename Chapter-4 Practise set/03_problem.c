/*
    A do while loop is executed:
    a. At least once.
    b. At least twice.
    c. At most once.
*/

#include<stdio.h>

int main(){
    int i = 0;
    // Do while is excuted only At least once.
    do
    {
        printf("Hey my name is Amit..!!\n");
        i++;
    } while (i<5);
    
    return 0;
}