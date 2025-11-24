#include <stdio.h>
int data[10];
int status[10]; 
int N;
int i, j;
int count;

int main() {

    for (i = 0; i < 10; i++) {
        status[i] = 10;
    }

    printf("Enter the number of elements (N, max %d): ", 10);
    scanf("%d", &N);

    if (N > 10 || N < 1) {
        N = 10;
    }
    
    printf("Enter %d integer numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");
    for (i = 0; i < N; i++) {
        if (status[i] == 10) {
            count = 1;
            for (j = i + 1; j < N; j++) {
                if (data[i] == data[j]) {
                    count++;
                    status[j] = 0; 
                }
            }
            status[i] = count; 
        }
        if (status[i] != 0) {
            printf("  %4d |    %4d\n", data[i], status[i]);
        }
    }

    return 0;
}