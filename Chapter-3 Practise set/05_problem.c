/*
    Write a program to determine whether a character entered by the user is
    lowercase or not.
*/

// We can use the ASCII Table - https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include<stdio.h>

int main(){
    char ch = 'a';
    printf("The value is %d\n", ch);

    if(ch>=97 && ch<= 122){
        printf("This Character is lower case %c\n", ch);
    }else{
        printf("..Oops.. This is not lower case %c", ch);
    }
    return 0;
}