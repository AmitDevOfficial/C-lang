/*
8. Write a program to count the occurrence of a given character in a string
*/


#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char c = 'm';  //How many char are pesent in char str[] variable
    char str[] = "Ammit";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
        
    }

    printf("%d", count);
    
    
    return 0;
}