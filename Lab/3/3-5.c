#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student (*GetStudent(int *room))[10];

int main() {
    struct student (*children)[10];
    int group;
    children = GetStudent(&group);
    for (int i = 0; i < group; i++) {
        printf("Room %d\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Name=%s Age=%d Sex=%c GPA=%.2f\n",
            children[i][j].name,
            children[i][j].age,
            children[i][j].sex,
            children[i][j].gpa);
        }
    }
    return 0;
}

struct student (*GetStudent(int *room))[10] {
    static struct student child[20][10];
    printf("Total rooms: ");
    scanf("%d", room);
    for (int i = 0; i < *room; i++) {
        printf("Room %d\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("[%d] Name: ", j + 1);
            scanf(" %19s", child[i][j].name);

            printf("[%d] Age: ", j + 1);
            scanf("%d", &child[i][j].age);

            printf("[%d] Sex (M/F): ", j + 1);
            scanf(" %c", &child[i][j].sex);

            printf("[%d] GPA: ", j + 1);
            scanf("%f", &child[i][j].gpa);
        }
    }

    return child;
}