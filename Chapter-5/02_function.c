#include <stdio.h>

void good_Morning();
void good_Afternoon();
void good_Evening();

void good_Morning()
{
    printf("Hey Good Morning..!\n");
}

void good_Afternoon()
{
    printf("Hey Good Afternoon..!\n");
}

void good_Evening()
{
    printf("Hey Good Evening..!\n");
}

int main()
{
    int num;
    printf("Enter your number (1, 2, or 3): ");
    scanf("%d", &num);

    if (num == 1)
    {
        good_Morning();
    }
    else if (num == 2)
    {
        good_Afternoon();
    }
    else if (num == 3)
    {
        good_Evening();
    }
    else
    {
        printf("Cannot Match Number..!\n");
    }
    
    return 0;
}
