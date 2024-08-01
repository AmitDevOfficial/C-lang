/*
2. Use the array in problem 1 to store 6 integers entered by the user
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
    for (int i = 0; i < n; i++)
    {
        printf("You enter the value %d\n", arr[i]);
    }


    return 0;
}