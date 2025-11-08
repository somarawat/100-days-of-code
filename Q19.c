#include <stdio.h>
int main(void)
{
    float side[3];
    printf("Enter sides of triangle separated by spaces: ");
    scanf("%f %f %f", &side[0], &side[1], &side[2]);
    if (side[0] + side[1] <= side[2] || side[1] + side[2] <= side[0] || side[0] + side[2] <= side[1])
    {
        printf("Invalid Triangle\n");
        return 1;
    }
    if (side[0] == side[1] && side[1] == side[2])
    {
        printf("Equilateral\n");
    }
    else if ((side[0]*side[0]) + (side[1]*side[1]) == (side[2]*side[2]) || (side[1]*side[1]) + (side[2]*side[2]) == (side[0]*side[0]) || (side[0]*side[0]) + (side[2]*side[2]) == (side[1]*side[1]))
    {
        printf("Right Angled\n");
    }
    else if ((side[0] == side[1]) || (side[1] == side[2]) || (side[0] == side[2]))
    {
        printf("Isoceles\n");
    }
    else 
    {
        printf("Scalene\n");
    }
    return 0;
}