#include <stdio.h>

#define SIZE 100
int GetSet(int []);

int main() {
    int data[SIZE];
    int size;

    size = GetSet(data);

    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("Array [%d] = %d\n", i, data[i]);
    }

    return 0;
}

int GetSet(int arr[]) {
    int n;
    printf("Enter Size Array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Array at [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    return n;
}