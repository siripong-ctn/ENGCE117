#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;
    
    // รับค่าตัวเลขตัวแรกก่อนเริ่มลูป
    scanf("%d", &number);
    if (number % 2 == 0) {
        evenSum += number;
    } else {
        oddSum += number;
    }

    // TODO: Implement the while loop and the if-else logic for even/odd accumulation
    while (number != 0) {
        scanf("%d", &number);

        // ต้องรับค่าตัวเลขถัดไปที่ท้ายลูป
        if (number % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }
    }

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}