#include <stdio.h>
int numbers[5];
int even_count = 0;
int odd_count = 0;
int i;

void get_number();
void obb_even_check(); 

int main() {

    get_number();

    printf("NUMBER CLASSIFICATION REPORT\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    obb_even_check();

    printf("\n");
    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);

    return 0;
}

void get_number() {
    for (i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

void obb_even_check() {
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
}