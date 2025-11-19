#include <stdio.h>

int main() {
    int N, sum = 0, i;
    
    // รับค่า N
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        sum += i;
    }
    // TODO: Implement the for loop to calculate the sum from 1 to N

    printf("%d\n", sum);
    return 0;
}