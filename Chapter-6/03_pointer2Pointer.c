#include<stdio.h>

int main(){
    int i = 27;
    int* j = &i;
    int** k = &j;

    printf("The address of value is %d\n", i);
    printf("The address of value is %d\n", *j);
    printf("The address of value is %d\n", *(&i));
    printf("The address of value is %d\n", k);
    printf("The address of value is %d\n", **(&j));
    
    return 0;
}