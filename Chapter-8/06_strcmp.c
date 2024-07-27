/*
STRCMP()
This function is used to compare two strings. It returns 0 if the strings are equal, a
negative value if the first string's mismatching character's ASCII value is less than the
second string's corresponding mismatching character, and a positive value otherwise.
*/

#include<stdio.h>
#include<string.h>

int main(){
    int a = strcmp("joke", "fake"); // its give the positive value perspective ASCII value
    printf("%d\n", a);

    int b = strcmp("SOH", "BEL"); // its give the negative value perspective ASCII value
    printf("%d\n", b);
     
    return 0;
}