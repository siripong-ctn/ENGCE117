#include <stdio.h>

int N_PERIODS, cmdCode, i;
float initialBalance, PENALTY_FEE, amount, currentBalance, interest;
float totalPenalties = 0.0;
void cmd_funtion();

int main() {

    printf("Get initialBalance: ");
    scanf("%f", &initialBalance);
    printf("Get PENALTY_FEE: ");
    scanf("%f", &PENALTY_FEE);
    printf("Get N_PERIODS: ");
    scanf("%d", &N_PERIODS);

    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n", initialBalance);

    for (i = 1; i <= N_PERIODS; i++) {

        printf("Command: ");
        scanf("%d", &cmdCode);
        printf("Amount: ");
        scanf("%f", &amount);

        cmd_funtion();

        printf("--- Month %d ---\n", i);
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);

    return 0;
}

void cmd_funtion() {
    switch (cmdCode) {
        case 1:
            currentBalance = currentBalance + amount;
            printf("Deposit: %.2f\n", amount);
            break;
        case 2:
            if (amount <= currentBalance) {
                currentBalance = currentBalance - amount;
                printf("Withdrawal: %.2f\n", amount);
            } else if (amount > currentBalance) {
                totalPenalties = totalPenalties + PENALTY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", PENALTY_FEE);
            }
            break;
        case 3: {
            float APR, interest;

            if (currentBalance < 1000.0) {
                APR = 1.0;
            }
            else if (currentBalance >= 1000.0) {
                APR = 2.5;
            }
            interest = currentBalance * (APR / 100.0) / 12.0;
            currentBalance = currentBalance + interest;
            printf("Interest: %.2f (Rate: %.1f%%)\n", interest, APR);
            break;
        }
        default:
            printf("Error: Invalid Command.\n");
            break;
    }
}