#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    printf("The sum of this number is %d\n", x + y);
    return x + y;
}

int main()
{
    sum(12, 2);
    sum(22, 2);
    sum(42, 3);
    sum(12, 18);
    return 0;
}