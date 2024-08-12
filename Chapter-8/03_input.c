#include<stdio.h>

int main(){
    char name[30];
    
    gets(name);
    printf("The value of name array is %s \n", name);
    
    return 0;
}
