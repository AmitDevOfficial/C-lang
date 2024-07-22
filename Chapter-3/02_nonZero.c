#include<stdio.h>

int main(){
    
    if(1){
        printf("Hy i am non zero i am excuted.!\n");
    }
    if('a'){
        printf("Hy i am non zero i am again excuted.!\n");
    }
    if(1123){
        printf("Hy i am non zero i am again and again excuted.!\n");
    }
    if(0){
        printf("Hy i am  zero - i am not excuted.!");
    }
    return 0;
}