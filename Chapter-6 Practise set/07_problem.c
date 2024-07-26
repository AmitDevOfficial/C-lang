// 7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.


#include<stdio.h>

int change_ten_times(int);

int change_ten_times(int b){
    b = b*10;
    return b;
}

int main(){
    int a = 5;
    int* n = &a;
    printf("The address of the value is a %u\n", &a);
    change_ten_times(a);
    printf("The value of a %d\n", a);
    return 0;
}