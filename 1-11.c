#include <stdio.h>

int main() {
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;
    
    // รับค่าราคาก่อน VAT และรหัสหมวดหมู่
    scanf("%f %d", &price_before_vat, &categoryCode);
    switch (categoryCode) {
    case 1:
        totalBill = price_before_vat * 1.07;
        break;
    case 2:
        totalBill = price_before_vat;
        break;
    case 3:
        totalBill = price_before_vat * 1.15;
        break;
    default:
        printf("Invalid Category\n");
        return 1; // Handle input failure
        break;
    }
    vatAmount = totalBill - price_before_vat;
    printf("VAT Amount: %.2f\n", vatAmount);
    printf("Total Price: %.2f\n", totalBill);
    // TODO: Implement the switch statement based on categoryCode, 
    // and perform the necessary float calculations inside each case.

    return 0;
}