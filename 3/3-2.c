#include <stdio.h>
struct Student {
    char name[50];
    int studentId;
    float score;
};
int main() {
    int N, i;
    scanf("%d", &N);
    struct Student students[N];
    for (i=0;i<N;i++) {
        scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name);
    }
    for (i = 0; i < N; i++) {
        printf("ID: %d ,", students[i].studentId);
        printf(" Score: %.2f ,", students[i].score);
        printf(" Name: %s \n", students[i].name);
    }
    return 0;
}