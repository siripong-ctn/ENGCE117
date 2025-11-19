#include <stdio.h>

int main() {
    int score;
    
    // รับค่าคะแนนสอบ
    printf("Enter Score: ");
    scanf("%d", &score);
    if (score >= 80) {
        printf("Grade A");
    } else if (score >= 70) {
        printf("Grade B");
    } else if (score >= 60) {
        printf("Grade C");
    } else if (score >= 50) {
        printf("Grade D");
    } else if (score < 50) {
        printf("Grade F");
    }
    
    // TODO: Implement the cascading if-else if-else logic here

    return 0;
}