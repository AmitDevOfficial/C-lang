#include<stdio.h>

int main(){
    //Pointer are the address are increasing with the int by address 4 bytes of the number
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of value is %u\n", &a);
    // printf("The address of value is %u\n", ptr);
    // ptr++;
    // printf("The address of value is %u\n", ptr);

    //Pointer are the address are increasing with the char by address 1 bytes of the number
    char a = 'A';
    char* ptr = &a;
    printf("The address of value is %u\n", &a);
    printf("The address of value is %u\n", ptr);
    ptr++;
    printf("The address of value is %u\n", ptr);

    return 0;
}