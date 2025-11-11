#include <stdio.h>

int main(void) 
{
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("%d\n", hcf);
    return 0;
}