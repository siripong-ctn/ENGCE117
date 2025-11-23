#include <stdio.h>
int daily_temp[7];
int max_temp;
int i;

int main() {
    max_temp = daily_temp[7];
    
    for (i = 0; i < 7; i++) {
        printf("Enter temperature for Day %d: ", i + 1);
        scanf("%d", &daily_temp[i]);
    }
    
    printf("--- DAILY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures (C): ");
    for (i = 0; i < 7; i++) {
        printf("%d ", daily_temp[i]);
    }
    printf("\n");

    for (i = 0; i < 7; i++) {
        if (daily_temp[i] > max_temp) {
            max_temp = daily_temp[i];
        }
    }

    printf("Maximum Temperature Found: %d C\n", max_temp);

    if (max_temp >= 35) {
        printf("Weather is HOT!");
    } else if (max_temp < 35) {
        printf("Weather is MODERATE.");
    }
    

    return 0;
}