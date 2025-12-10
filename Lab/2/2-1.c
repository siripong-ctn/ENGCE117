#include <stdio.h>
#include <string.h>

void reverse(char str1[],char str2[]);

int main(){
    char text[50];
    char out[50];

    printf("Enter a String: ");
    scanf("%s", text);

    printf("Output: ");
    reverse(text,out);

    return 0;
}

void reverse(char str1[],char str2[]){
    int length = strlen(str1);
    int n, m;
    for(n = 0 , m = length -1 ;n < length; n++,m--){
        str2[n]=str1[m];
    }
    str2[length] = '\0';
    printf("%s\n",str2);
}