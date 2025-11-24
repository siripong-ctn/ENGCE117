#include <stdio.h>
int matrix[2][4];
int total_sum = 0;
int i, j;
void get_array(int arr[2][4]);
void print_array(int arr[2][4]);
void calculate_sum(int arr[2][4]);

int main() {

    printf("Enter %d integer numbers for the 2x4 matrix:\n", 2 * 4);

    get_array(matrix);

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Recorded Matrix (2x4):\n");
    
    print_array(matrix);

    calculate_sum(matrix);

    printf("\nTotal Sum of all elements: %d\n", total_sum);

    return 0;
}

void get_array(int arr[2][4]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_array(int arr[2][4]) {
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void calculate_sum(int arr[2][4]) {
    total_sum = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            total_sum += arr[i][j];
        }
    }
}