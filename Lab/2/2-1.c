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
    int i, j ;

    for(int i = 0 , j = length -1 ;i < length; i++,j--){
        str2[i]=str1[j];
    }
    str2[length] = '\0';
    printf("%s\n",str2);
}