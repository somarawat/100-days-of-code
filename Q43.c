#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    int num, originalNum, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    if (sum == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}