#include <stdio.h>

int data[6];
int total_sum = 0;
int i;

int main() {
    
    for (i = 0; i < 6; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("SUMMATION REPORT\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }

    for (i = 0; i < 6; i++) {
        total_sum += data[i];
    }

    printf("\n");
    printf("Sum: %d\n", total_sum);
    return 0;
}