#include <stdio.h>

int main(void)
{
    float width, length;
    printf("Enter width and length: ");
    scanf("%f %f", &width, &length);
    printf("Area=%.2f, Perimeter=%.2f", (width * length), 2 * (width + length));
    return 0;
}