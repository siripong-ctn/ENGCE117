#include <stdio.h>
int data[10], status[10], N, i, j, count;
void get_N();

int main() {

    for (i = 0; i < 10; i++) {
        status[i] = 0;
    }

    get_N();

    printf("\nFREQUENCY ANALYSIS REPORT\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");

    for (i = 0; i < N; i++) {
        printf("%d ", data[i]);
    }

    printf("\nFREQUENCY TABLE\n");
    printf("Number | Frequency\n");
    for (i = 0; i < N; i++) {
        if (status[i] == 0) {
            count = 1;
            for (j = i + 1; j < N; j++) {
                if (data[i] == data[j]) {
                    count++;
                    status[j] = 1;
                }
            }
            status[i] = 1;
            printf("%6d | %9d\n", data[i], count);
        }
    }

    return 0;
}

void get_N() {
    printf("Enter (1 - %d): ", 10);
    scanf("%d", &N);

    if (N > 10 || N < 1) {
        N = 10;
    }
    
    printf("Enter %d integer numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);
    }
}