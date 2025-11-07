#include <stdio.h>

int main(void)
{
    int num1, num2, swap;
    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("After swap:%d %d", num1, num2);
    return 0;
}