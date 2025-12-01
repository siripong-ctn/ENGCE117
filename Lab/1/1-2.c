#include <stdio.h>
#include <stdlib.h>

void GetSet(int **a, int *b);

int main() {
    int *data, num;

    GetSet(&data, &num);

    printf("\n");
    for (int j = 0; j < num; j++) {
        printf("Array [%d] = %d\n", j, data[j]);
    }

    return 0;
}

void GetSet(int **a, int *b) {
    int i;

    printf("Enter Size Array: ");
    scanf("%d", b);

    *a = (int *)malloc((*b) * sizeof(int));

    for (i = 0; i < *b; i++) {
        printf("Array at [%d]: ", i);
        scanf("%d", &(*a)[i]);
    }
}