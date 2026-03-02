#include <stdio.h>

void TowerHanoi(int m, int i, int j);

int main() {
    TowerHanoi(3,1,3);
    return 0;
}

void TowerHanoi(int m, int i, int j) {
    if (m == 1) {
        printf("Disc 1 from %d to %d\n", i, j);
        return;
    }
    int helper = 6 - i - j;
    TowerHanoi(m - 1, i, helper);
    printf("Disc %d from %d to %d\n", m, i, j);
    TowerHanoi(m - 1, helper, j);
}