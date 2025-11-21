#include <stdio.h>

int initialStock, N, cmdCode, quantity, i;
float PENALTY_FEE;
int currentStock; // ใช้เป็นตัวแปรสำหรับ stock
float totalPenalties = 0.0;
void CMDCode_Command();

int main() {
    
    // 1. รับค่าเริ่มต้น 3 ค่า
    if (scanf("%d %f %d", &initialStock, &PENALTY_FEE, &N) != 3) {
        printf("Error");
        return 1;
    }
    currentStock = initialStock;
    
    // TODO: Implement the for loop (N times)
    for (i = 0; i < N; i++) {
        // 2. รับค่า cmdCode และ quantity
        if (scanf("%d %d", &cmdCode, &quantity) != 2) {
            break;
        }

        // 3. Implement the switch statement with nested if-else validation
        CMDCode_Command();
    }
    
    return 0;
}

void CMDCode_Command() {
    switch (cmdCode) {
        case 1:
            currentStock += quantity;
            printf("Received %d units.\n", quantity);
            break;
        case 2:
            if (quantity <= 0) {
                printf("Error: Quantity must be positive.");
            } else if (quantity <= currentStock) {
                currentStock -= quantity;
                printf("Shipped %d units.", quantity);
            } else if (quantity > currentStock) {
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