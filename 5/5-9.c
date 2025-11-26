#include <stdio.h>

struct Product
{
    int item_id ,stock_quantity;
    float cost_price, sell_price;
};

float calculate_total_profit(float cost, float sell, int qty);
float calculate_profit_percentage(float cost, float sell);

int main() {
    struct Product item;
    float total_profit, profit_percent;

    printf("Enter ID: ");
    scanf("%d", &item.item_id);
    printf("Enter Cost Price: ");
    scanf("%f", &item.cost_price);
    printf("Enter Sell Price: ");
    scanf("%f", &item.sell_price);
    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stock_quantity);

    total_profit = calculate_total_profit(item.cost_price, item.sell_price, item.stock_quantity);
    profit_percent = calculate_profit_percentage(item.cost_price, item.sell_price);

    printf("INVENTORY PROFIT REPORT\n");
    printf("ID: %d\n", item.item_id);
    printf("Cost: %.2f\n", item.cost_price);
    printf("Sell: %.2f\n", item.sell_price);
    printf("Quantity: %d\n", item.stock_quantity);
    printf("Total Profit: %.2f\n", total_profit);
    printf("Profit Percentage: %.2f%%\n", profit_percent);

    printf("Status: ");
    if (profit_percent > 0) {
        printf("Profit");
    } else if (profit_percent < 0) {
        printf("Loss");
    } else {
        printf("Break Even");
    }

    return 0;
}

float calculate_total_profit(float cost, float sell, int qty) {
    return (sell - cost) * qty;
}

float calculate_profit_percentage(float cost, float sell) {
    return ((sell - cost) / cost) * 100;
}