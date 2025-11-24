#include <stdio.h>
int sum = 0, i, scores[5], above_average_count = 0;
float average = 0.0;
void score_analysis_report();

int main() {

    for (i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("STUDENT SCORE ANALYSIS REPORT");
    printf("Scores: ");

    score_analysis_report();
    average = (float)sum / 5;

    for (i = 0; i < 5; i++) {
        if (scores[i] > average) {
            above_average_count++;
        }
    }

    printf("\n");
    printf("Sum: %d\n", sum);
    printf("Average Score: %.2f\n", average);
    printf("Scores Above Average: %d\n", above_average_count);

    return 0;
}

void score_analysis_report() {
    for (i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += scores[i];
    }
}