#include <stdio.h>

int main() {
    int initialStock;
    float penaltyFee;
    int N;

    scanf("%d %f %d", &initialStock, &penaltyFee, &N);

    int stock = initialStock;
    float penaltySum = 0.0f;

    for (int i = 0; i < N; i++) {

        int cmd, amount;
        scanf("%d %d", &cmd, &amount);

        switch (cmd) {

            case 1:
                stock += amount;
                printf("Added %d units to stock.\n", amount);
                break;

            case 2:
                if (amount <= 0) {
                    printf("Invalid quantity (must be > 0).\n");
                    break;
                }

                if (amount > stock) {
                    penaltySum += penaltyFee;
                    printf("Cannot ship %d units - not enough stock. Penalty +%.2f\n",
                           amount, penaltyFee);
                    break;
                }

                stock -= amount;
                printf("Shipped %d units.\n", amount);
                break;

            case 3:
                printf("Stock: %d units\n", stock);
                printf("Accumulated Penalties: %.2f\n", penaltySum);
                break;

            default:
                printf("Unknown command: %d\n", cmd);
                break;
        }
    }

    return 0;
}
