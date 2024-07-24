#include<stdio.h>

int main(){
    for(int i = 0; i < 15; i++){
        if(i == 5){
            // break;  //Exit the condition now
            continue; //Skip the iteration now
        }
        printf("I is the value of %d\n", i);
        
    }
    return 0;
}