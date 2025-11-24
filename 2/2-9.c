#include <stdio.h>

int initialStock, N, cmdCode, quantity, i, currentStock;
float PENALTY_FEE;
float totalPenalties = 0.0;
void cmd_funtion();

int main() {

    scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N);
    currentStock = initialStock;

    for (i = 0; i < N; i++) {
        scanf("%d %d", &cmdCode, &quantity);
        cmd_funtion();
    }
    
    return 0;
}

void cmd_funtion() {
    switch (cmdCode) {
        case 1:
            currentStock += quantity;
            printf("Received %d units.\n", quantity);
            break;

        case 2:
            if (quantity <= 0) {
                printf("Error: Quantity must be positive.");
            } 
            else if (quantity <= currentStock) {
                currentStock -= quantity;
                printf("Shipped %d units.", quantity);
            } 
            else if (quantity > currentStock) {
                totalPenalties += PENALTY_FEE;
                printf("FAILURE: Insufficient stock. PENALTY %.2f added.", PENALTY_FEE);
            }

            printf("\n");
            break;

        case 3:
            printf("Current Stock: %d\n", currentStock);
            printf("Total Penalties: %.2f\n", totalPenalties);
            break;

        default:
            printf("Error: Invalid Command.\n");
            break;
    }
}