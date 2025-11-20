#include <stdio.h>

int main() {
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;
    
    // รับค่ารหัสโซนและน้ำหนัก
    scanf("%d %f", &zoneCode, &weight_kg);
    switch (zoneCode){
        case 1:
            if (weight_kg <= 5) {
                totalCost = weight_kg * 50;
            } else if (weight_kg > 5) {
                totalCost = weight_kg * 80;
            }
            break;
        case 2:
            if (weight_kg <= 10) {
                totalCost = weight_kg * 150;
            } else if (weight_kg > 10) {
                totalCost = weight_kg * 250;
            }
            break;
        case 3:
            totalCost = 500;
            break;
        default:
            printf("Invalid Zone Code");
            return 1; // Handle input failure
            break;
    }
    
    // TODO: Implement the switch statement based on zoneCode, 
    // and the nested if-else logic based on weight_kg.

    if (totalCost > 0.0 || zoneCode > 3 || zoneCode < 1) { // Check if calculation succeeded or if invalid code was found
        printf("%.2f\n", totalCost);
    } 

    return 0;
}