#include <stdio.h>

int main() {
    int dayCode, hour;
    
    // รับค่ารหัสวันและชั่วโมง
    scanf("%d %d", &dayCode, &hour);
    if (dayCode <= 5) {
        if (hour >= 8 && hour <= 17) {
            printf("System Running (Workday)");
        } else {
            printf("System Idle (Off-hours)");
        }
    } else if (dayCode <= 7) {
        printf("Weekend Relax Mode");
        return 0;
    } else {
        printf("Invalid Day Code");
        return 1; // Handle input failure
    }
    
    // TODO: Implement the main switch statement with nested if-else logic inside cases 1-5

    return 0;
}