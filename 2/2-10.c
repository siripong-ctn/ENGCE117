#include <stdio.h>

int main() {
    int N_PERIODS, cmdCode, i;
    float initialBalance, PENALTY_FEE, amount, currentBalance;
    float totalPenalties = 0.0;

    scanf("%f %f %d", &initialBalance, &PENALTY_FEE, &N_PERIODS);
    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n", initialBalance);

    for (i = 1; i <= N_PERIODS; i++) {

        if (scanf("%d %f", &cmdCode, &amount) != 2) {
            printf("Input Error\n");
            break;
        }

        switch (cmdCode) {
        case 1:
            currentBalance += amount;
            printf("Deposit: %.2f\n", amount);
            break;

        case 2:
            if (amount <= currentBalance) {
                currentBalance -= amount;
                printf("Withdrawal: %.2f\n", amount);
            } else {
                totalPenalties += PENALTY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", PENALTY_FEE);
            }
            break;

        case 3: {
            float APR, interest;

            if (currentBalance < 1000.0) {
                APR = 1.0;
            }
            else {
                APR = 2.5;
            }

            interest = currentBalance * (APR / 100.0) / 12.0;
            currentBalance += interest;

            printf("Interest: %.2f (Rate: %.1f%%)\n", interest, APR);
            break;
        }

        default:
            printf("Error: Invalid Command.\n");
            break;
        }

        printf("--- Month %d ---\n", i);
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);

    return 0;
}
