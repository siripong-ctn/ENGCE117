#include <stdio.h>

int main() {
    int sum, i;

    printf("Enter integer for loop: ");
    scanf("%d", &sum);

    for (i = 1; i <= sum; i++) {
        printf("[%d] Hello World\n", i);
    }

    return 0;
}