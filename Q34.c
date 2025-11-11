#include <stdio.h>
int main(void)
{
    int num, i, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; 
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}