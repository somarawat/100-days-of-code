#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Enter numbers:");
    scanf("%d %d", &num1, &num2);
    printf("After Swap:%d %d", num2, num1);
    return 0;
}