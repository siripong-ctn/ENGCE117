#include <stdio.h>

int data[6];
int total_sum = 0;
int i;
void getnumber();
void sum_data();

int main() {
    
    getnumber();

    printf("SUMMATION REPORT\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }

    sum_data();

    printf("\n");
    printf("Sum: %d\n", total_sum);
    return 0;
}

void getnumber() {
    for (i = 0; i < 6; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &data[i]);
    }
}

void sum_data() {
    for (i = 0; i < 6; i++) {
        total_sum += data[i];
    }
}