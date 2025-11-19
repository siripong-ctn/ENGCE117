#include <stdio.h>

int main() {
    int number;
    
    // TODO: Implement the do-while loop structure for validation
    do {
        printf("Enter a number (1-10): ");
        scanf("%d", &number);
        if (number > 10 || number < 1) {
            printf("Error: Value must be 1-10.\n");
        }

        // TODO: Implement the error message print inside the loop if validation fails
        
    } while (number < 1 || number > 10);

    printf("Input accepted: %d\n", number);
    return 0;
}