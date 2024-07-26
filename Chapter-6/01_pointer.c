#include<stdio.h>

int main(){
    int i = 47;
    int* j = &i; //j is pointer to pointing i 
    printf("The address of value of is %p\n", &i); // give the value perfect pointer using %p
    // printf("The address of value of is %u", &i); // give the value integer pointer using %u
    printf("The address of value of is %p\n", j); // give the value in\nteger pointer using %u

    // In this line we can get the value of the address
    printf("The value of the address is %d\n", *&i);
    printf("The value of the address is %d\n", *j);
    
    return 0;
}