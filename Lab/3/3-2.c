#include <stdio.h>

struct student 
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student *child);

int main() {
    struct student aboy;
    struct student agirl;
    aboy.sex = 'M';
    aboy.gpa = 3.00;

    agirl.sex = 'F';
    agirl.gpa = 3.00;

    printf("BRFORE FUNCTION\n");
    printf("GPA boy: %.2f\n", aboy.gpa);
    printf("GPA girl: %.2f\n", agirl.gpa);

    upgrade(&aboy);
    upgrade(&agirl);
    printf("\nAFTER FUNCTION\n");
    printf("GPA boy: %.2f\n", aboy.gpa);
    printf("GPA girl: %.2f", agirl.gpa);

    return 0;
}

void upgrade(struct student *child) {
    switch ((*child).sex) {
    case 'M':
        (*child).gpa *= 1.1;
        break;
    case 'F':
        (*child).gpa *= 1.2;
        break;
    default:
        break;
    }
}