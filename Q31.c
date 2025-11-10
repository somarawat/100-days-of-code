#include <stdio.h>
int main(void)
{
    int n;
    int binary[32]; // Assuming a 32-bit integer
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0)
    {
        binary[index++] = n % 2;
        n /= 2;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}