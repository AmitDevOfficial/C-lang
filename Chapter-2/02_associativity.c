#include<stdio.h>

int main(){
    int a = 2;
    int b = 4;
    int c = 6;
    // Associativity is left to right */%
    printf("The value of associativity is %d\n", a*b/c);

    printf("The value of associativity is %d\n", a*b/c + 7);

    printf("The value of associativity is %d\n", 3*b/2*c + 7*a);
    /*
        3*b/2*c + 7*a
        3*b/2*c + 14
        12/2*c + 14
        12/2*c + 14
        6*c + 14
        36 + 14
        50
    */
    return 0;
}