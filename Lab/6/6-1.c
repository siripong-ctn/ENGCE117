#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};

void ShowAll(struct studentNode *walk);
void InsNode(struct studentNode *walk, char *name, int age, char sex, float gpa, struct studentNode **begin);
void GoBack(struct studentNode **walk);
void DelNode(struct studentNode **walk, struct studentNode **begin);
struct studentNode *AddNode(struct studentNode **start, char *name, int age, char sex, float gpa);

int main() {
    struct studentNode *start = NULL, *now = NULL;

    now = AddNode(&start, "one", 6, 'M', 3.11);ShowAll(start);

    now = AddNode(&start, "two", 8, 'F', 3.22);ShowAll(start);

    InsNode(now, "three", 10, 'M', 3.33, &start);ShowAll(start);

    InsNode(now, "four", 12, 'F', 3.44, &start);ShowAll(start);

    GoBack(&now);

    DelNode(&now, &start);ShowAll(start);

    DelNode(&now, &start);ShowAll(start);

    DelNode(&now, &start);ShowAll(start);

    return 0;
}

void ShowAll(struct studentNode *walk) {
    while (walk != NULL) {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}

void InsNode(struct studentNode *walk, char *name, int age, char sex, float gpa, struct studentNode **begin) {
    struct studentNode *newNode = malloc(sizeof(struct studentNode));

    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = walk;
    newNode->back = walk->back;

    if (walk->back != NULL) {
        walk->back->next = newNode;
    } else {
        *begin = newNode;
    }

    walk->back = newNode;
}

void GoBack(struct studentNode **walk) {
    if (*walk != NULL && (*walk)->back != NULL) {
        *walk = (*walk)->back;
    }
}

void DelNode(struct studentNode **walk, struct studentNode **begin) {
    if (*walk == NULL) {
        return;
    }

    struct studentNode *temp;

    if ((*walk)->back != NULL) {
        (*walk)->back->next = (*walk)->next;
    } else {
        *begin = (*walk)->next;
    }

    if ((*walk)->next != NULL) {
        (*walk)->next->back = (*walk)->back;
        temp = (*walk)->next;
    } else {
        temp = (*walk)->back;
    }

    free(*walk);
    *walk = temp;
}

struct studentNode *AddNode(struct studentNode **start, char *name, int age, char sex, float gpa) {
    struct studentNode *newNode = malloc(sizeof(struct studentNode));

    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;
    newNode->next = NULL;
    newNode->back = NULL;

    if (*start == NULL) {
        *start = newNode;
    } else {
        struct studentNode *walk = *start;
        while (walk->next != NULL)
            walk = walk->next;
        walk->next = newNode;
        newNode->back = walk;
    }
    return newNode;
}