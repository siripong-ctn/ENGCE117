#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *back;
    struct studentNode *next;
};

void ShowAll(struct studentNode *walk);
struct studentNode* AddNode(struct studentNode **start, char *name, int age, char sex, float gpa);
void DelNode(struct studentNode **start, struct studentNode **walk);
void InsNode(struct studentNode **walk, char *name, int age, char sex, float gpa);

int main() {
    struct studentNode *start = NULL, *now;

    now = AddNode(&start, "one", 6, 'M', 3.11);
    ShowAll(start);

    now = AddNode(&start, "two", 8, 'F', 3.2);
    ShowAll(start);

    InsNode(&now, "three", 10, 'M', 3.33);
    ShowAll(start);

    InsNode(&now, "four", 12, 'F', 3.44);
    ShowAll(start);

    DelNode(&start, &now);
    ShowAll(start);

    return 0;
}

void ShowAll(struct studentNode *walk) {
    while (walk) {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}

struct studentNode* AddNode(struct studentNode **start, char *name, int age, char sex, float gpa) {
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
        struct studentNode *temp = *start;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->back = temp;
    }
    return newNode;
}

void InsNode(struct studentNode **walk, char *name, int age, char sex, float gpa) {
    struct studentNode *newNode = malloc(sizeof(struct studentNode));
    strcpy(newNode->name, name);
    newNode->age = age;
    newNode->sex = sex;
    newNode->gpa = gpa;

    newNode->back = *walk;
    newNode->next = (*walk)->next;

    if ((*walk)->next)
        (*walk)->next->back = newNode;

    (*walk)->next = newNode;
}

void DelNode(struct studentNode **start, struct studentNode **walk) {
    if (*walk == NULL) return;

    if ((*walk)->back)
        (*walk)->back->next = (*walk)->next;
    else
        *start = (*walk)->next;

    if ((*walk)->next)
        (*walk)->next->back = (*walk)->back;

    struct studentNode *temp = (*walk)->next ? (*walk)->next : (*walk)->back;

    free(*walk);
    *walk = temp;
}