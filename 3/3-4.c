#include <stdio.h>
struct Student {
    char name[50];
    int studentId;
    float score;
};
int main() {
    int N,i;
    int passCount=0,failCount = 0;
    scanf("%d", &N);
    struct Student students[N];
    for (i = 0; i < N; i++) {
        scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name);
    }
    for (i = 0; i < N; i++) {
        if (students[i].score >= 60.0) {
            passCount++;
        } else {
            failCount++;
        }
    }
    printf("Pass Count: %d\n", passCount);
    printf("Fail Count: %d\n", failCount);
    return 0;
}