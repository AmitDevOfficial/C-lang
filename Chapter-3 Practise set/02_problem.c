/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include<stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("Enter your mark 1 - ", marks1);
    scanf("%d", &marks1);

    printf("Enter your mark 2 - ", marks2);
    scanf("%d", &marks2);

    printf("Enter your mark 3 - ", marks3);
    scanf("%d", &marks3);

    printf("Your mark1 is %d\nYour mark2 is %d\nand Your mark3 is %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("Your are failed due to the indivisual mark in subject\n");
    }else if((marks1 + marks2 + marks3)/3 < 40){
        printf("Your are failed due to the less percentage\n");
    }else{
        printf("Congratulations..! your are pass");
    }
    return 0;
}