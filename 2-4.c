#include <stdio.h>
int main() {
    float principal, monthlyPayment, interest;
    int monthCount = 1;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;
    
    // รับค่ายอดหนี้เริ่มต้น และยอดชำระรายเดือน
    if (scanf("%f %f", &principal, &monthlyPayment)) {
        while (principal > 0){

            interest = principal * 0.01;
            principal = principal + interest;
            
            if (monthlyPayment < interest) {
                principal += PENALTY;
            } 

            principal = principal - monthlyPayment;
            printf("Month %d: Remaining %.2f\n", monthCount, principal);

            if (monthCount < 10) {
                monthCount++;
            } else {
                break;
            }
        }
    } else {
        printf("Error");
    }

    // TODO: Implement the while loop structure (while principal > 0) 
    // TODO: Implement the calculation and nested if-else logic for PENALTY
    if (monthCount >= 10) {
        printf("Loan settled in %d+ months.\n", monthCount);
    } else {
        printf("Loan settled in %d months.\n", monthCount - 1);
    }
    return 0;
}