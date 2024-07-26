#include<stdio.h>

int main(){
    int marks[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks Here - ", marks[i]);
        scanf("%d", &marks[i]);
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("The value of cgpa is %d\n", marks[i]);
        
    }
    
    return 0;
}