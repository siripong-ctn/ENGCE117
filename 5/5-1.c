#include <stdio.h>

int calculate_area(int length, int width);
int input_length, input_width, result_area;

int main() {
    printf("Enter rectangle length (integer): ");
    scanf("%d", &input_length);
    
    printf("Enter rectangle width (integer): ");
    scanf("%d", &input_width);

    calculate_area(input_length, input_width);

    printf("RECTANGLE AREA REPORT\n");
    printf("Length: %d\n", input_length);
    printf("Width: %d\n", input_width);
    printf("Calculated Area: %d\n", result_area);

    return 0;
}

int calculate_area(int length, int width) {
    result_area = length * width;
    return result_area;
}