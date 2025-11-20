#include <stdio.h>

int main() {
    int termCode;
    float investmentAmount;
    float aprRate = 0.0;
    float totalInterest = 0.0;
    
    // รับค่ารหัสระยะเวลาและจำนวนเงินลงทุน
    scanf("%d %f", &termCode, &investmentAmount);
    
    // TODO: Implement the switch statement based on termCode, 
    // and the nested if-else logic to determine the aprRate.

    switch (termCode) {
    case 1:
        if (investmentAmount < 5000) {
            aprRate = 0.03;
        } else if (investmentAmount >= 5000) {
            aprRate = 0.04;
        }
        break;
    case 2:
        if (investmentAmount < 10000) {
            aprRate = 0.05;
        } else if (investmentAmount >= 10000) {
            aprRate = 0.065;
        }
        break;
    case 3:
        aprRate = 0.08;
        break;
    default:
        printf("Invalid Term Code");
        return 1; // Handle input failure
        break;
    }

    if (termCode >= 1 && termCode <= 3) {
        totalInterest = investmentAmount * aprRate;
        printf("%.2f\n", totalInterest);
    } else {
        printf("Invalid Term Code\n");
    }

    return 0;
}