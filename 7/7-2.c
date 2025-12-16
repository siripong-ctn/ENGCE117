#include <stdio.h>
#include <stdlib.h>

void handling_r();
FILE *fptr;
int num1, num2, num3, num4, num5;
int total_sum;
char FILENAME[100];

int main() {
    handling_r();
    
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILENAME);
        exit(1);
    }

    printf("---FILE READING PROCESS---\n");
    printf("Reading data from %s...\n", FILENAME);

    fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5);
    total_sum = num1 + num2 + num3 + num4 + num5;

    printf("File reading complete.\n");
    fclose(fptr);
    printf("\n---DATA ANALYSIS REPORT---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);

    return 0;
}

void handling_r() {
    printf("Enter file name: ");
    scanf("%s", FILENAME);
    fptr = fopen(FILENAME, "r");
}