#include <stdio.h>

int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr);
void get_monthly_data(int array[], int size, const char *type);
void print_monthly_data(int array[], int size, const char *type);

#define MONTHS 3

int main() {
    int monthly_revenue[MONTHS];
    int monthly_expense[MONTHS];
    int net_profit;
    int business_status;

    get_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    get_monthly_data(monthly_expense, MONTHS, "EXPENSE");

    printf("\n3 MONTH FINANCIAL ANALYSIS REPORT\n");
    print_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    print_monthly_data(monthly_expense, MONTHS, "EXPENSE");

    net_profit = analyze_profitability(monthly_revenue, monthly_expense, MONTHS, &business_status);
    
    printf("\nNET PROFIT: %d\n", net_profit);
    if (net_profit >= 0) {
        printf("BUSINESS STATUS: PROJECT IS PROFITABLE");
    } else if (net_profit < 0) {
        printf("BUSINESS STATUS: PROJECT IS UNPROFITABLE");
    }

    return 0;
}

void get_monthly_data(int array[], int size, const char *type) {
    printf("\nEnter %d months of %s value: \n", size, type);
    for (int i = 0; i < size; i++) {
        printf("Month %d %s: ", i+1, type);
        scanf("%d", &array[i]);
    }
}

void print_monthly_data(int array[], int size, const char *type) {
    long total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    printf("TOTAL %s: %ld\n", type, total);
}

int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr) {
    int rev_sum = 0;
    int exp_sum = 0;
    for (int i = 0; i < size; i++) {
        rev_sum += rev_ptr[i];
    }
    for (int i = 0; i < size; i++) {
        exp_sum += exp_ptr[i];
    }

    *status_ptr = rev_sum - exp_sum;

    return *status_ptr;
}