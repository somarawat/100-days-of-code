#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter percentage:");
    scanf("%d", &num);
    if (num >= 90 && num <= 100)
    {
        printf("Grade A\n");
    }
    else if (num >= 80 && num < 90)
    {
        printf("Grade B\n");
    }
    else if (num >= 70 && num < 80)
    {
        printf("Grade C\n");
    }
    else if (num >= 60 && num < 70)
    {
        printf("Grade D\n");
    }
    else if (num < 60)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}