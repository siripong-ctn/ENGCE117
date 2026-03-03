#include <stdio.h>
#include <stdlib.h>

int *KnapsackGreedy(int *w, int *v, int n, int wx);
int Select(int *w, int *v, int *y, int n);

int main() {
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};
    int *x = KnapsackGreedy(w, v, n, wx);
    for(int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}

int* KnapsackGreedy(int *w, int *v, int n, int wx) {
    int *x = (int*)calloc(n, sizeof(int));
    int *y = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        x[i] = 0;
        y[i] = 1;
    }
    int weight = 0;

    while(weight < wx) {
        int i = Select(w, v, y, n);
        if(i == -1) break;

        if(weight + w[i] <= wx) {
            x[i] = 1;
            weight += w[i];
        }
        y[i] = 0;
    }

    free(y);
    return x;
}

int Select(int *w, int *v, int *y, int n) {
    int best = -1;
    float bestRatio = -1;
    for(int i = 0; i < n; i++) {
        if(y[i] == 1) {
            float ratio = (float)v[i] / w[i];
            if(ratio > bestRatio) {
                bestRatio = ratio;
                best = i;
            }
        }
    }
    return best;
}