#include<stdio.h>

int main(){
    // Print happy birthday in 10 Times
    /*
    int i =0;

    while(i<10){
        printf("Happy BirthDay Amit..!! %d\n", i);
        i++;
    }
    */
   //Print table for any number by the input of the user
    int i = 1;
    int n;
    int tab;
    printf("Enter any number to the table - ", n);
    scanf("%d", &n);
    while(i<=10){
        tab = n * i;
        printf("%d * %d = %d\n",n, i, tab);
        i++;
    }
    return 0;
}