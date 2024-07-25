// 2. Write a function to convert Celsius temperature into Fahrenheit
#include<stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5) + 32;
}
int main(){
    float c = 45;
    printf("Celcious to ferhanite value is %.2f is %.2f",c, c2f(c));
    return 0;
}