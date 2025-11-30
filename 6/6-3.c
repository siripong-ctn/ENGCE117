#include <stdio.h>

int main() {
    #define SIZE 3
    int data[SIZE];
    int *ptr = data;
    int i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i);
        scanf("%d", &data[i]);
    }
    
    printf("\nARRAY AND POINTER REPORT\n");
    printf("Index | Value (Direct) | Value (via Pointer) | Address\n");
    printf("------------------------------------------------------\n");

    for (i = 0; i < SIZE; i++) {
        printf("%5d | %14d | %19d | %p\n", i, data[i], *(ptr + i), ptr + i);
    }
    return 0;
}