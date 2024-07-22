#include<stdio.h>

int main(){
    int a = 2; int b = 2;
    printf("The value of a AND b is true %d\n", a&&b);
    printf("The value of a OR b is one of true %d\n", a||b);
    printf("The value of a is not a %d\n", !a);

    if(a&&b){
        printf("Both values are true");
    }else{
        printf("Both values are not true");
    }
    return 0;
}