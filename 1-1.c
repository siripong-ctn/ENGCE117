// Pre-code (โค้ดบังคับ)
#include <stdio.h>
int main() {
    int N, i;
    
    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N) != 1) {
        return 1; // Handle input failure
    } else if (N <= 0) {
        printf("Error");
    }
    
    for (i = 1; i <= N; i++) {
        printf("Hello Loop!\n");
    }
    // TODO: Implement the for loop to print the message N times

    return 0;
}