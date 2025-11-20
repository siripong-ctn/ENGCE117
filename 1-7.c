#include <stdio.h>

int main() {
    int customerType;
    float consumption_kWh;
    float totalBill = 0.0;
    
    // รับค่าประเภทลูกค้าและปริมาณการใช้ไฟฟ้า
    scanf("%d %f", &customerType, &consumption_kWh);

    switch (customerType) {
    case 1:
        if (consumption_kWh <= 100) {
            totalBill = consumption_kWh * 3;
        } else if (consumption_kWh > 100) {
            totalBill = consumption_kWh * 4;
        }
        break;
    case 2:
        if (consumption_kWh <= 500) {
            totalBill = consumption_kWh * 5;
        } else if (consumption_kWh > 500) {
            totalBill = consumption_kWh * 6.5;
        }
        break;
    default:
        printf("Invalid Customer Type");
        break;
    }
    // TODO: Implement the main if-else logic based on customerType, 
    // and the nested if-else logic based on consumption_kWh.

    if (totalBill > 0.0 && customerType <= 2) { // Use totalBill > 0.0 to check if calculation succeeded
        printf("%.2f\n", totalBill);
    } 

    return 0;
}