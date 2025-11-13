#include <stdio.h>
int main(void)
{
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i) / (float)(3 + (i - 1) * 4);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}