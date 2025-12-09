#include <stdio.h>

int find_and_upgrade(int *arr_ptr, int size, int search_value, int new_value);
void print_array(int array[], int size);
#define SIZE 5

int main() {
    int number[SIZE], new_val, search_val, status, i;
    int old_number[SIZE];

    printf("Enter %d integer elements for the array: \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &number[i]);
        old_number[i] = number[i];
    }

    printf("Enter value to search (Search Value): ");
    scanf("%d", &search_val);
    printf("Enter new value to replace it with (New Value): ");
    scanf("%d", &new_val);

    printf("ARRAY UPDATE REPORT\n");
    printf("Array BEFORE Update: ");
    print_array(number, SIZE);

    number[SIZE] = find_and_upgrade(number, SIZE, search_val, new_val);

    printf("Array AFTER Update: ");
    print_array(number, SIZE);

    printf("Status: ");
    if (old_number[SIZE] != number[SIZE]) {
        printf("SUCCESSFUL.");
    } else if (old_number[SIZE] == number[SIZE]) {
        printf("FAILED (Value not found).");
    }

    return 0;
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int find_and_upgrade(int *arr_ptr, int size, int search_value, int new_value) {
    for (int j = 0; j < size; j++) {
        if (search_value == arr_ptr[j]) {
            arr_ptr[j] = new_value;
        }
    }
    return *arr_ptr;
}