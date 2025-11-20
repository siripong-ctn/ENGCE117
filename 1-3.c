#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    
    // รับค่าตัวเลข 2 ตัวและรหัสคำสั่ง
    scanf("%d %d %d", &num1, &num2, &operationCode);

    switch (operationCode) {
    case 1:
        result = num1 + num2;
        printf("%d", result);
        break;
    case 2:
        result = num1 - num2;
        printf("%d", result);
        break;
    case 3:
        result = num1 * num2;
        printf("%d", result);
        break;
    case 4:
        result = num1 / num2;
        printf("%d", result);
        break;
    default :
        printf("Invalid Operation");
        break;
    }

    // TODO: Implement the switch statement logic here, including break and default

    return 0;
}