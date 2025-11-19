#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    
    // รับค่าตัวเลข 2 ตัวและรหัสคำสั่ง
    scanf("%d %d %d", &num1, &num2, &operationCode);
    if (operationCode == 1) {
        result = num1 + num2;
        printf("Output: %d", result);
    } else if (operationCode == 2) {
        result = num1 - num2;
        printf("Output: %d", result);
    } else if (operationCode == 3) {
        result = num1 * num2;
        printf("Output: %d", result);
    } else if (operationCode == 4) {
        result = num1 / num2;
        printf("Output: %d", result);
    } else {
        printf("Invalid Operation");
    }

    // TODO: Implement the switch statement logic here, including break and default

    return 0;
}