#include <stdio.h>

int calculate_net_balance(int *trans_array, int size, int *status_ptr);
#define SIZE 5

int main() {
    int transactions[SIZE], net_balance, finance_status, i;

    printf("Enter %d transactions (Income +, Expense -): \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%d", &transactions[i]);
    }

    net_balance = calculate_net_balance(transactions, SIZE, &finance_status);

    printf("\nPERSONAL FINANCE REPORT\n");
    printf("Transactions Record: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", transactions[i]);
    }
    printf("\nNet Balance: %d\n", net_balance);
    printf("Status: ");
    if (net_balance >= 0) {
        printf("PROFIT");
    } else {
        printf("LOSS");
    }

    return 0;
}

int calculate_net_balance(int *trans_array, int size, int *status_ptr) {
    int j, sum = 0;

    for (j = 0; j < size; j++) {
        sum += *(trans_array + j);
    }

    *status_ptr = (sum >= 0) ? 1 : -1;

    return sum;
}
