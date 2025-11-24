#include <stdio.h>
int N, i;
int passSum = 0;
int failCount = 0;
int scores[100];
void get_scores();

int main() {

    scanf("%d", &N);
    get_scores();
    
    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);
    return 0;
}

void get_scores() {
    for (i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        
        if (scores[i] >= 50) {
            passSum += scores[i];
        } else {
            failCount++;
        }
    }
    
}