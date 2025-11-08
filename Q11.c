#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}