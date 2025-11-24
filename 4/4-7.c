#include <stdio.h>
int data[10];
int N, i, search_value, count = 0; 

void get_number();
void process(); 

int main() {
    
    printf("(N, max %d): ", 10);
    scanf("%d", &N);
    if (N > 10 || N < 1) {
        N = 10;
    }
    
    get_number();
    process();
    
    printf("\nSearch Value: %d\n", search_value);
    printf("Frequency Count: %d\n", count);

    return 0;
}

void get_number() {
    printf("Enter %d integer numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);
    }
}

void process() {
    printf("Enter the Search Value: ");
    scanf("%d", &search_value);
    for (i = 0; i < N; i++) {
        if (data[i] == search_value) {
            count++;
        }
    }
    printf("FREQUENCY ANALYSIS REPORT\n");
    printf("Total (N): %d\n", N);
    printf("Recorded: ");
    for (i = 0; i < N; i++) {
        printf("%d ", data[i]);
    }
}