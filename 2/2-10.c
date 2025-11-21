#include <stdio.h>

int main() {
    float startBalance, penaltyFee;
    float balance, amount;
    float penaltyTotal = 0.0f;
    int periods, command;

    scanf("%f %f %d", &startBalance, &penaltyFee, &periods);

    balance = startBalance;
    printf("Initial Balance: %.2f\n", startBalance);

    for (int month = 1; month <= periods; month++) {

        if (scanf("%d %f", &command, &amount) != 2) {
            printf("Invalid input format.\n");
            break;
        }

        switch (command) {

            case 1:
                balance += amount;
                printf("Deposited %.2f\n", amount);
                break;

            case 2:
                if (amount <= 0) {
                    printf("Withdrawal amount must positive.\n");
                    break;
                }

                if (amount > balance) {
                    penaltyTotal += penaltyFee;
                    printf("Withdrawal failed penalty +%.2f\n", penaltyFee);
                    break;
                }

                balance -= amount;
                printf("Withdrew %.2f\n", amount);
                break;

            case 3: {
                float rate = (balance < 1000.0f) ? 1.0f : 2.5f;
                float interest = balance * (rate / 100.0f) / 12.0f;
                balance += interest;

                printf("Interest added: %.2f (Rate %.1f%%)\n", interest, rate);
                break;
            }

            default:
                printf("Error: Invalid Command %d\n", command);
                break;
        }

        printf(">>> Month %d <<<\n", month);
    }

    printf("Final Balance: %.2f\n", balance);
    printf("Total Penalties: %.2f\n", penaltyTotal);

    return 0;
}
