#include<stdio.h>

int main(){
    printf("Find Area of Lenght\n");

    int lenght, breadth;
    printf("Enter lenght - ");
    scanf("%d", &lenght);

    printf("Enter breadth - ");
    scanf("%d", &breadth);

    printf("Area of Rectangle is %d", lenght*breadth);
    return 0;
}