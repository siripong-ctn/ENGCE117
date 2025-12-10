#include <stdio.h>
#include <string.h>

char *reverse(char str1[]);

int main() {
    char text[50];
    
    printf("Enter text: ");
    scanf("%s", text);

    char *out = reverse(text);
    printf("Reversed: %s\n", out);
}

char *reverse(char str1[]) {
    static char out[50];
    
    int l = strlen(str1);
    int n, m;

    for(n = 0, m = l - 1; n < l; n++, m--) {
        out[n] = str1[m];
    }

    out[l] = '\0';
    return out;
}
