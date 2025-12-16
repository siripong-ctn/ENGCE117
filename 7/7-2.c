#include <stdio.h>

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

    printf("---FILE READING PROCESS---");
    printf("Reading data from %s...\n", FILENAME);

    printf("File reading complete.\n");
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