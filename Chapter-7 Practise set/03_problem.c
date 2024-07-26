/*
4. Repeat problem 3 for a general input provided by the user using scanf
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the table if you want - \n");
    scanf("%d", &a);
    int arr[10];

    for (int i = 0; i < 10; i++)
    {

        arr[i] = a * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",a, i+1, arr[i]);
    }

    return 0;
}