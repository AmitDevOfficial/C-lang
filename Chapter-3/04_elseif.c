#include<stdio.h>

int main(){
    int age;

    printf("Enter your age when check your are drive or not - ", age);
    scanf("%d", &age);
    
    if(age>60){
        printf("You can Drive but you are senior citizen");
    }
    else if(age>18){
        printf("You can Drive");
    }
    else{
        printf("You cannot Drive");
    }

    return 0;
}