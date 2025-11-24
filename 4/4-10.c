#include <stdio.h>
int i, j;
void get_array(int arr[3][3]);
void print_array(int arr[3][3]);

int main() {
    int data[3][3];

    printf("Enter %d integer numbers for the 3x3 array:\n", 3 * 3);

    get_array(data);

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", 3, 3);
    printf("Content (Table Format):\n");
    print_array(data);
    
    return 0;
}

void get_array(int arr[3][3]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_array(int arr[3][3]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}