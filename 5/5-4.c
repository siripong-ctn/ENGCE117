#include <stdio.h>

#define NUM_STUDENTS 3

struct Student {
    int id;
    int score;
};

struct Student class_data[NUM_STUDENTS];
int top_student_id, i;

int find_max_score_id(struct Student students[], int size);

int main() {

    printf("Enter data for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("*Student %d *\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &class_data[i].id);
        printf("Enter Score: ");
        scanf("%d", &class_data[i].score);
    }

    top_student_id = find_max_score_id(class_data, NUM_STUDENTS);

    printf("*STUDENT SCORE REPORT*\n");
    printf("ID  | Score\n");
    printf("----|---\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%-3d | %d\n", class_data[i].id, class_data[i].score);
    }
    printf("TOP PERFORMER ID: %d\n", top_student_id);

    return 0;
}

int find_max_score_id(struct Student students[], int size) {
    int max_score = students[0].score;
    top_student_id = students[0].id;

    for (int i = 1; i < size; i++) {
        if (students[i].score > max_score) {
            max_score = students[i].score;
            top_student_id = students[i].id;
        }
    }
    return top_student_id;
}