#include <stdio.h>

int main() {
    int clearanceLevel, age, isActive;
    
    // รับค่าระดับ, อายุ และสถานะ
    // TODO: Implement the if-else logic using compound conditions (&& and ||)
    scanf("%d %d %d", &clearanceLevel, &age, &isActive);
    if (clearanceLevel == 3 && isActive == 1 || clearanceLevel == 2 && age >= 25 && isActive == 1) {
        printf("Access Granted");
    } else {
        printf("Access Denied");
        return 1; // Handle input failure
    }

    return 0;
}