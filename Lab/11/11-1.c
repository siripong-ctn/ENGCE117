#include <stdio.h>

int BinSearch(int data[], int n, int find);

int main() {
    int get;
    int data[6] = {1, 2, 3, 4, 5, 6};
    printf("Enter number want to search [1-6]: ");
    scanf("%d", &get);
    int pos = BinSearch(data, 6, get);

    printf("Found at %d", pos);
    return 0;
}

int BinSearch(int data[], int n, int find) {
    int i, pos = -1;
    for(i = 0; i < n; i++) {
        if(data[i] == find) {
            pos = i;
            break;
        }
    }
    return pos;
}