// ...existing code...
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Enter coefficients a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;

    if (a == 0.0) {
        if (b == 0.0) {
            printf("Not a valid equation.\n");
        } else {
            double root = -c / b;
            printf("Linear equation. Root: %.6f\n", root);
        }
        return 0;
    }

    double discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0.0) {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Roots are real and different: %.6f and %.6f\n", root1, root2);
    } else if (discriminant == 0.0) {
        double root = -b / (2.0 * a);
        printf("Roots are real and same: %.6f\n", root);
    } else {
        double realPart = -b / (2.0 * a);
        double imagPart = sqrt(-discriminant) / (2.0 * a);
        printf("Roots are complex: %.6f + %.6fi and %.6f - %.6fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}