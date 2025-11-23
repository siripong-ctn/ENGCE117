#include <stdio.h>
int N, i;
int scores[100];

void checkget_scores();
void checkprint_scores();

int main() {
    scanf("%d", &N);
    int scores[N];
    
    checkget_scores();
    checkprint_scores();

    return 0;
}

void checkget_scores() {
    for (i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }
}

void checkprint_scores() {
    for (i = N - 1; i >= 0; i--) {
        printf("Answer: %d\n", scores[i]);
    }
}