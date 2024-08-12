#include<stdio.h>

int main(){
    char name[30];
    gets(name); //get cannot print the next msg in new line
    // printf("%s", name);
    
    puts(name);  //get can be print the next msg in new line

    printf("welcome");
    
    return 0;
