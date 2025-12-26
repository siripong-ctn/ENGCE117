#include <stdio.h>
#include <stdlib.h>

void go(int ***p, int **z);

int main() {
    int *b = (int*) malloc(sizeof(int)); // new int
    *b = 11;
    int *c = (int*) malloc(sizeof(int)); // new int
    *c = 22;
    int **a;

    go(&a, &b);
    printf("%d %p %p %p\n", **a, *a, a, &a);
    printf("\n");
    go(&a, &c);
    printf("%d %p %p %p\n", **a, *a, a, &a);

    return 0;
}

void go(int ***p, int **z) {
    *p = z;
    printf("%d %p %p %p\n", ***p, **p, *p, p);
}