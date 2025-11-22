#include <stdio.h>

struct Item {
    char name[50];
    float unitPrice;
    int quantity;
};
int N, i;
float subTotal = 0.0;
float totalVAT = 0.0;
float grandTotal = 0.0;
float VAT_RATE = 0.07;
void funtion_forloop();

int main() {
    scanf("%d", &N);
    printf("--- RECEIPT ---\n");
    
    funtion_forloop();
    
    totalVAT = subTotal * VAT_RATE;
    grandTotal = subTotal + totalVAT;
    
    printf("-------------\n");
    printf("Subtotal: %.2f\n", subTotal);
    printf("VAT (7%%): %.2f\n", totalVAT);
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}

void funtion_forloop() {
    struct Item items[N];
    for (i = 0; i < N; i++) {
        float itemCost;

        scanf("%s %f %d", items[i].name, &items[i].unitPrice, &items[i].quantity);
        
        itemCost = items[i].unitPrice * items[i].quantity;
        
        printf("%s x %d = %.2f\n", items[i].name, items[i].quantity, itemCost);
        subTotal += itemCost;
    }
}