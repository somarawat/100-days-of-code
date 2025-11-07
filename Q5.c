#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    printf("Enter temperature in Celcius: ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit: %d\n", fahrenheit);
    return 0;
}