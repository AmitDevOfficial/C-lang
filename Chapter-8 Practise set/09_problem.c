/*
9. Write a program to check whether a given character is present in a string or not.
*/


#include<stdio.h>
#include<string.h>

int main(){
    char c = 'm';  //How many char are pesent in char str[] variable
    int contains = 0;
    char str[] = "Ammit";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
        
    }


    if (contains)
    {
      printf("yes is contains");
    }else{
      printf("no is not contains");
    }
    
    
    
    return 0;
}