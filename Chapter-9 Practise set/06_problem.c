/*
6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/

#include<stdio.h>

typedef struct c{
    int real;
    int imaginary;
} Complex;

void display(Complex c){
    printf("The value of complex numberr is %d + %di\n", c.real, c.imaginary);
}


int main(){
    Complex c[5];

    for (int i = 0; i < 5; i++)
    {
    printf("Enter the Real Number\n");
    scanf("%d", &c[i].real);

    printf("Enter the Imaginay Number\n");
    scanf("%d", &c[i].imaginary);

    display(c[i]);
    
    }
    
    
    
    
    return 0;
}