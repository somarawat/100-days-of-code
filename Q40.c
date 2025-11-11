#include <stdio.h>
int main(void)
{
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid input. Please enter a binary number.\n");
            return 1;
        }
    }
    printf("\n");

    return 0;
}