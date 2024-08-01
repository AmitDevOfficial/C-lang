/*
Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.721;
    ptr[1] = 4.721;
    ptr[2] = 44.721;
    ptr[3] = 23.721;
    ptr[4] = 80.457;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    return 0;
}