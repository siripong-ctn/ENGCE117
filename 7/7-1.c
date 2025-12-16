#include <stdio.h>

void handling_w();
FILE *fptr;
int year = 2025;
char FILENAME[100];

int main() {
    handling_w();

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME);
        return 1;
    }

    printf("---FILE WRITING PROCESS---\n");
    printf("Writing data to %s...\n", FILENAME);

    fprintf(fptr, "Hello, C File Handling is easy.\nYear: %d", year);

    printf("File writing complete.\n");
    fclose(fptr);
    printf("\n---FILE OPERATION REPORT---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILENAME);

    return 0;
}

void handling_w() {
    printf("Enter file name: ");
    scanf("%s", FILENAME);
    fptr = fopen(FILENAME, "w");
}