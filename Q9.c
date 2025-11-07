#include <stdio.h>
#include <math.h>

int main(void)
{
    float principal, rate, time;
    printf("Input: ");
    scanf("%f %f %f", &principal, &rate, &time);

    float SI = (principal * rate * time) / 100;
    float CI = (principal * pow((1 + (rate / 100)), time)) - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", SI, CI);

    return 0;
}