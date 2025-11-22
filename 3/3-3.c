#include <stdio.h>
struct Student {
    char name[50];
    int studentId;
    float score;
};
int main() {
    int N, i;
    float avarage=0;
    scanf("%d", &N);
    struct Student students[N];
    for (i=0;i<N;i++) {
        scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name);
    }
    for (i = 0; i < N; i++) {
        avarage+=students[i].score;
    }
    avarage=avarage/N;
    printf("Avarage Score: %.2f",avarage);
    return 0;
}