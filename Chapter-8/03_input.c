#include<stdio.h>

int main(){
    char name[30];
    scanf("%s", name);
    gets(name);
    printf("The value of name array is %s \n", name);
    
    return 0;
}