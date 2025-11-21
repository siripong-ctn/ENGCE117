#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // รับค่า N (จำนวนรายการ)
    scanf("%d", &N);
    for (i = 0;i < N;i++) {

        scanf("%f %d", &unitPrice, &quantity);
        itemCost = unitPrice * quantity;

        if (unitPrice >= 1000) {
            itemCost *= 0.9;
        } else {
            itemCost = itemCost;
        }   

        grandTotal += itemCost;
        
    }
    
    // TODO: Implement the for loop (N times)
    // TODO: Inside the loop, receive unitPrice and quantity
    // TODO: Implement the if-else discount logic and accumulate grandTotal

    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}