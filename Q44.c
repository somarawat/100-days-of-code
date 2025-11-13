#include <stdio.h>
int main(void)
{
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0) {
        sum = 0.0;
    } else {
        sum = 1.0;
        
        for (i = 2; i <= n; ++i) {
            sum += (double)(2 * i - 1) / (double)(2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}