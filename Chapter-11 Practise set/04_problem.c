/*
4. Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("You enter the value %d\n", arr[i]);
    }
    
    n = 10;
    arr = (int *) realloc(arr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("You enter the value %d\n", arr[i]);
    }

    return 0;
}