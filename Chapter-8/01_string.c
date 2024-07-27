#include<stdio.h>

int main(){
    int st[] = {'a', 'm', 'i'};
    printf("Print the string array element %c\n", st[0]);
    for (int i = 0; i < 3; i++)
    {
         printf("Print the string array element %c\n", st[i]);
    }
    
    return 0;
}