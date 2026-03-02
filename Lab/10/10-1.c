#include <stdio.h>

long SumLoop(int m);
long SumRecur(int m);

int main() {
    int n = 0;
    printf("Enter N number for function: ");
    scanf("%d", &n);

    printf("Do function 1 to %d\n", n);
    printf("SumLoop(n) = %d\n", SumLoop(n));
    printf("SumRecur(n) = %d", SumRecur(n));

    return 0;
}

long SumLoop(int m) {
    long sum = 0;
    for (int i = 1; i <= m; i++) {
        sum = sum + i;
    }
    return sum;
}

long SumRecur(int m) {
    if (m == 1) {
        return 1;
    } else {
        return m + SumRecur(m - 1);
    }
}