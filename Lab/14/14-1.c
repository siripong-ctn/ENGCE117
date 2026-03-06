#include <stdio.h>
#include <stdlib.h>

int KnapscakBT(int *w, int *v, int n, int wx, int i, int *x);

int main() {
    int n=5, wx=11;
    int w[5] = {1,2,5,6,7};
    int v[5] = {1,6,18,22,22};
    int *x, vx;
    x = (int*)malloc(n * sizeof(int));
    vx = KnapscakBT(w, v, n, wx, 0, x);
    printf("Value = %d\n", vx);
    for(int i=0; i<n; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}

int KnapscakBT(int *w, int *v, int n, int wx, int i, int *x) {
    if(i == n) {
        return 0;
    }
    int x1[n], x2[n];
    for(int k=0; k<n; k++){
        x1[k] = x[k];
        x2[k] = x[k];
    }
    x1[i] = 0;
    int v1 = KnapscakBT(w, v, n, wx, i+1, x1);
    int v2 = 0;
    if(w[i] <= wx) {
        x2[i] = 1;
        v2 = v[i] + KnapscakBT(w, v, n, wx - w[i], i+1, x2);
    }
    if(v2 > v1) {
        for(int k=0;k<n;k++)
            x[k] = x2[k];
        return v2;
    } else {
        for(int k=0;k<n;k++)
            x[k] = x1[k];
        return v1;
    }
}