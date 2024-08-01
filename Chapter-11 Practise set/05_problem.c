/*
5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 7 * (i+1);
    }
    printf("The array is \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("You enter the value %d\n", arr[i]);
    }
    
    n = 15;
    arr = (int *) realloc(arr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = 7 * (i+1);
    }
    printf("The array is \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("You enter the value %d\n", arr[i]);
    }

    return 0;
}