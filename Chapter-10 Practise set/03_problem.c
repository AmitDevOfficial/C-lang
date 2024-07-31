/*
3. Write a program to read a text file character by character and write its content
twice in separate file.
*/

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr1;

    ptr = fopen("char.txt", "r");
    ptr1 = fopen("char1.txt", "a");
    
    while (1)
    {
        ch = fgetc(ptr);

        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr1, "%c", ch);
            fprintf(ptr1, "%c", ch);
            printf("%c", ch);
        }
    }

    return 0;
}