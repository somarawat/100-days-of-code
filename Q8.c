#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    do
    {
        sum += num;
        num--;
    } 
    while (num > 0);
    printf("Sum=%d", sum);
}