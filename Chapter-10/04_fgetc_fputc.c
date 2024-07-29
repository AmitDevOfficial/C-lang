#include <stdio.h>

int main()
{
    // FILE *ptr;
    // ptr = fopen("amit.txt", "r"); // r = read To read mode in char
    // char c = fgetc(ptr);
    // printf("%c", c);

    FILE *ptr;
    ptr = fopen("amit.txt", "a"); // a = Append To write mode mode in char
    
    fputc('c',ptr);

    return 0;
}