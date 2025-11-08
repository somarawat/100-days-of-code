include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    int discriminant, root1, root2, realPart, imagPart;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Categorize and find the roots based on the discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %d, %d\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (both roots are same)
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: %d\n", root1);
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %d + %d, %d - %d\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}