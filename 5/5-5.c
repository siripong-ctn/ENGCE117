#include <stdio.h>

#define NUM_STUDENTS 4

struct Student {
    int id;
};

struct Student id_list[NUM_STUDENTS];
int search_id;
int found_status;
int i;
int check_id_existence(struct Student students[], int size, int search_id);

int main() {

    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &id_list[i].id);
    }
    
    printf("Enter ID to search: ");
    scanf("%d", &search_id);
    
    printf("*ID SEARCH REPORT*\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", id_list[i].id);
    }
    printf("\n");
    printf("Search ID: %d\n", search_id);
    check_id_existence(id_list, NUM_STUDENTS, search_id);
    if (found_status) {
        printf("ID FOUND in the system\n");
    } else {
        printf("ID NOT FOUND in the system\n");
    }

    return 0;
}

int check_id_existence(struct Student students[], int size, int search_id) {
    found_status = 0;
    for (int i = 0; i < size; i++) {
        if (students[i].id == search_id) {
            found_status = 1; 
            break;
        }
    }
    return found_status;
}