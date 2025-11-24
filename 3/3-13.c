#include <stdio.h>
int countUpper, countLower, countDigit, countOther, i;
char text[101]; 
void getInput();

int main() {
    scanf("%s", text);
    
    getInput();
    
    printf("Uppercase: %d\n", countUpper);
    printf("Lowercase: %d\n", countLower);
    printf("Digits: %d\n", countDigit);
    printf("Special/Other: %d\n", countOther);
    return 0;
}

void getInput() {
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            countUpper++;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            countLower++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            countDigit++;
        } else {
            countOther++;
        }
    }
}