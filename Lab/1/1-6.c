#include <stdio.h>
#include <stdlib.h>

int* GetMatrix(int *row, int *col);

int main() {
    int *data, m, n;
    data = GetMatrix(&m, &n);
    printf("Matrix Report:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}

int* GetMatrix(int *row, int *col) {
    printf("Enter rows: ");
    scanf("%d", row);

    printf("Enter cols: ");
    scanf("%d", col);

    int *data = (int*)malloc((*row) * (*col) * sizeof(int));
    // Use Malloc From include <stdlib.h>

    if (data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Enter value at [%d][%d]: ", i, j);
            scanf("%d", &data[i * (*col) + j]);
        }
    }

    return data;
}