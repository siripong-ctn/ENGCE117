#include <stdio.h>
#include <stdlib.h>

int *Dijkstra(int *L, int n);

int main() {
    int n = 5, i = 0, j = 0, *d, *g;
    g = (int*)malloc(n*n*sizeof(int));
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            g[i*n+j] = -1;
        }
    }

    g[0*n+1] = 100;
    g[0*n+2] = 80;
    g[0*n+3] = 30;
    g[0*n+4] = 10;
    g[1*n+2] = 20;
    g[3*n+1] = 20;
    g[3*n+2] = 20;
    g[4*n+3] = 10;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%5d", g[i*n+j]);
        }
        printf("\n");
    }

    d = Dijkstra(g, n);
    for(i = 0; i < n-1; i++) {
        printf("%d ", d[i]);
    }

    return 0;
}

int *Dijkstra(int *L, int n) {
    int i, j, v, min;

    int *D = (int*)malloc(n * sizeof(int));
    int *C = (int*)malloc(n * sizeof(int));

    for(i = 0; i < n; i++) {
        C[i] = 1;
        D[i] = L[0*n+i];
        if(L[0*n+i] == -1)
            D[i] = 100;
    }
    D[0] = 0;
    C[0] = 0;
    for(i = 1; i < n-1; i++) {
        min = 100;
        for(j = 0; j < n; j++) {
            if(C[j] == 1 && D[j] < min) {
                min = D[j];
                v = j;
            }
        }
        C[v] = 0;
        for(j = 0; j < n; j++) {
            if(C[j] == 1 && L[v*n+j] != -1) {
                if(D[v] + L[v*n+j] < D[j]) {
                    D[j] = D[v] + L[v*n+j];
                }
            }
        }
    }
    free(C);
    return D;
}