#include <stdio.h>
struct Transaction {
    char description[50];
    float amount;
};
int N, i;
float totalIncome = 0.0, totalExpense = 0.0, netBalance = 0.0;
void gg();

int main() {
    gg();
    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);

    return 0;
}

void gg() {
    scanf("%d", &N);
    struct Transaction transactions[N];
    for (i = 0; i < N; i++) {
        scanf("%f %s", &transactions[i].amount, transactions[i].description);

        if (transactions[i].amount >= 0.0) {
            totalIncome += transactions[i].amount;
        } else {
            
            totalExpense += -transactions[i].amount; 
        }
    }
    netBalance = totalIncome - totalExpense;
}