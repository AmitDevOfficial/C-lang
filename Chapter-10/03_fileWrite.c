#include<stdio.h>

int main(){
    /*
    // w - Write file all delete file connect and write the passes content;s
    FILE *fptr;
    fptr = fopen("amit.txt", "w"); w = Write
    int num = 555;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    */
    
    // a Append file can be added the connect in the last of the content;s
    FILE *fptr;
    fptr = fopen("amit.txt", "a"); // a = Append
    int num = 555;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}