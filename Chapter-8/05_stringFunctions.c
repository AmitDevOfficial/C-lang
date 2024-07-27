#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "Amit";

    
    // char st1[30];
    // strcpy(st1, st);
    // printf("%s", st1);
    
    // printf("%d", strlen(st));

    char st2[] = " vishwakarma";
    strcat(st, st2);
    printf("%s", st);
    
    return 0;
}