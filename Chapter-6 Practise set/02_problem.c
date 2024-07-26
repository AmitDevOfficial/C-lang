/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
*/

#include<stdio.h>


int returning_addressValue(int* ptr){
    printf("The value of address is %p\n", ptr);
    printf("The address of value is %d\n", *ptr);
    return 0;
}


int main(){
    int i = 55;
    int* ptr = &i;
    printf("The address value is %p\n", &i);
    returning_addressValue(ptr);
    return 0;
}