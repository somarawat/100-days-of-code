#include <stdio.h>

int main(void)
{
    int num, digit, product = 1, has_odd = 0, temp;

    scanf("%d", &num);

    temp = num < 0 ? -num : num; // handle negative numbers

    while (temp > 0) {
        digit = temp % 10; 
        if (digit % 2 != 0) { 
            product *= digit; 
            has_odd = 1; 
        }
        temp /= 10;
    }

    if (!has_odd) {
        product = 1;
    }

    printf("%d\n", product);

    return 0;
}