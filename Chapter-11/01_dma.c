// Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 4;
    printf("%d\n", ptr[0]);

    return 0;
}