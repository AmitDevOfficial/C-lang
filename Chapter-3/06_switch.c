#include<stdio.h>

int main(){
    int a;
    printf("Enter Number - ", a);
    scanf("%d", &a);

    switch(a){
        case 1: 
        printf("You Eneter %d", a);
        break;
        case 2: 
        printf("You Eneter %d", a);
        break;
        case 3: 
        printf("You Eneter %d", a);
        break;
        default:
        printf("Nothing match..!!");
    }
    return 0;
}