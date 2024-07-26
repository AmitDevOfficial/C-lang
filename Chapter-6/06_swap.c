// Swaping
#include<stdio.h>
void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 8, b = 2;
    swap(&a, &b);
    printf("The value of swaping a is %d and the value of swaping b is %d", a, b);
    return 0;
}