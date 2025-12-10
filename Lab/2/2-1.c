#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main() {
    char text[100];

    printf("Enter String: ");
    fgets(text, sizeof(text), stdin);
    // fgets อ่านข้อความที่เว้นวรรคได้ scanf จะไม่อ่านข้อความที่เว้นวรรคเมื่อเข้าฟังก์ชัน

    text[strcspn(text, "\n")] = '\0';

    reverse(text);
    printf("Reversed string: %s\n", text);

    return 0;
}

void reverse(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}