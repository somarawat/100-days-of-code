#include <stdio.h>
int main(void)
{
    int late_days;
    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    if (late_days <= 5) {
        printf("Fine ₹%d\n", late_days * 2);
    } else if (late_days <= 10) {
        printf("Fine ₹%d\n", (5 * 2) + ((late_days - 5) * 4));
    } else if (late_days <= 30) {
        printf("Fine ₹%d\n", (5 * 2) + (5 * 4) + ((late_days - 10) * 6));
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}