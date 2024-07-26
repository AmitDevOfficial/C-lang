#include<stdio.h>

int main(){
    char a = 'A';
    char* c = &a;

    float f = 2.22;
    float* f1 = &f;

    printf("The address of the value - %c is %p\n",a, &a);
    printf("The address of the value is %p\n",c);
    
    printf("The address of the value - %f is %p\n",f, &f);
    printf("The address of the value is %p\n",f1);
    return 0;
}