#include <stdio.h>

int main() {
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;
    
    // รับค่า N (จำนวนนักเรียน)
    if (scanf("%d", &N) != 1) {
        printf("Error");
        return 1;
    }
    
    // TODO: Implement the for loop (N times)
    for (i = 0; i < N; i++) {
        // 1. รับค่า 4 ตัวแปร
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4) {
            break;
        }

        // 2. คำนวณเปอร์เซ็นต์การเข้าเรียน (ใช้ float)
        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        // 3. Implement the complex decision logic and print status/reason.
        // (Use compound conditions && and ||)
        if (score >= 50 && attendancePercent >= 75) {
            passCount++;
            printf("Student %d: PASS", studentId);
        } else {
            failCount++;
            printf("Student %d: FAIL - ", studentId);
            if (score < 50 && attendancePercent < 75) {
                printf("Both Score and Attendance");
            } else if (attendancePercent < 75) {
                printf("Low Attendance (70.00%%)");
            } else if (score < 50) {
                printf("Low Score");
            }
        }

        printf("\n");
    }

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);
    return 0;
}