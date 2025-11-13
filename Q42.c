#include <stdio.h>

int main(void)
{
    int number, sum_of_divisors = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (sum_of_divisors == number) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}