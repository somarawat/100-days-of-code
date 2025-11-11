#include <stdio.h>

int main(void) 
{
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;

    for (int i = max; ; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d\n", lcm);
    return 0;
}