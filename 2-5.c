#include <stdio.h>
int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    
    // รับค่าคะแนนตัวแรก
    scanf("%d", &score);

    // TODO: Implement the while loop (while score != -1)
    while (score != -1) {
        // TODO: Implement the cascading if-else if-else logic 
        // to determine the grade and increment the correct counter.

        if (score >= 80) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else if (score < 50) {
            countF++;
        } else if (score > 100) {
            printf("Error");
            return 1;
        }

        // ต้องรับค่าคะแนนถัดไปที่ท้ายลูป
        if (scanf("%d", &score) != 1) {
            break; 
        }
    }

    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);
    return 0;
}