#include <stdio.h>
int main(void)
{
    int n, product = 1;
    int first_even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
        if (!first_even) first_even = i;
    }

    if (first_even == 0)
        printf("0\n"); 
    else
        printf("%d (", product);

    if (first_even != 0) {
        for (int i = 2; i <= n; i += 2) {
            printf("%d", i);
            if (i + 2 <= n)
                printf(" * ");
        }
        printf(")\n");
    }

    return 0;
}