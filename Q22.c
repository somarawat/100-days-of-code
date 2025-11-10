#include <stdio.h>
int main() 
{
    int cost_price, selling_price;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cost_price, &selling_price);

    if (selling_price > cost_price) {
        int profit = selling_price - cost_price;
        int profit_percentage = (profit * 100) / cost_price;
        printf("Profit %d%%\n", profit_percentage);
    } else if (cost_price > selling_price) {
        int loss = cost_price - selling_price;
        int loss_percentage = (loss * 100) / cost_price;
        printf("Loss %d%%\n", loss_percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}