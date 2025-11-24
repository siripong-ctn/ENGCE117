#include <stdio.h>

int N_DAYS, day;
float initialBudget;
float remainingBudget;
float dailySpend;
void loopfunction();

int main() {
    

    scanf("%f %d", &initialBudget, &N_DAYS);
    remainingBudget = initialBudget;
    
    printf("Day | Spend | Remaining\n");
    printf("---------------------------\n");
    
    loopfunction();
    
    printf("---------------------------\n");
    printf("Final Budget: %.2f\n", remainingBudget);
    return 0;
}

void loopfunction() {
    for (day = 1; day <= N_DAYS; day++) {
        dailySpend = 0.0; 

        if (remainingBudget >= 500.00) {
            dailySpend = 100.00;
        } else if (remainingBudget >= 100.00) {
            dailySpend = 50.00;
        } else if (remainingBudget > 0.0) { 
            dailySpend = 20.00;
        } else {
            
            dailySpend = 0.0;
        }

        if (dailySpend > remainingBudget) {
            dailySpend = remainingBudget;
        }
        
        remainingBudget -= dailySpend;
        printf("%d | %.2f | %.2f\n", day, dailySpend, remainingBudget);
    }
}