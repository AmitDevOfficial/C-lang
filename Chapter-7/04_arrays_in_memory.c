#include<stdio.h>

int main(){
    int age[] = {10, 20, 30, 40};

    for (int i = 0; i < 4; i++)
    {
        printf("The address of value age %d is %u\n",age[i], &age[i]);
        i++;
    }
    
    return 0;
}