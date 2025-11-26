#include <stdio.h>

struct Product {
    char name555[50];
    int productId;
    float price;
};
struct Product item;
void get_data();

int main(){
    
    get_data();

    printf("ID: %d ,", item.productId);printf(" Price: %.2f ,", item.price);
    printf(" Name: %s \n", item.name555);

    return 0;
}

void get_data() {
    printf("Enter ID: ");
    scanf("%d", &item.productId);
    printf("Enter Price: ");
    scanf("%f", &item.price);
    printf("Enter Name: ");
    scanf("%s", item.name555);
}