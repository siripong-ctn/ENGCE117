#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *);

int main() {
    int *data, num, i;

    data = GetSet(&num);

    printf("\n");
    for(i = 0; i < num; i++) {
        printf("Array [%d] : %d\n", i, data[i]);
    }

    return 0;
}

int *GetSet(int *n) {
    int i;
    int *arr;

    printf("Enter Size Array: ");
    scanf("%d", n);

    arr = (int *)malloc((*n) * sizeof(int));

    for(i = 0; i < *n; i++) {
        printf("Array at [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    return arr;
}
