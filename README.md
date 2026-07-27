# ENGCE117 - Computer Programming for Computer Engineer

## ติดตั้ง C Compiler
แนะนำให้ติดตั้ง **MinGW-w64** หรือ **MSYS2** ซึ่งมี GCC Compiler

ตรวจสอบการติดตั้งด้วยคำสั่ง

```bash
gcc --version
```

หากแสดงเวอร์ชันของ GCC แสดงว่าติดตั้งเรียบร้อยแล้ว


## สร้างไฟล์โปรแกรมภาษา C

สร้างไฟล์ชื่อ

```text
name1.c
```

ตัวอย่างโค้ด

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## คอมไพล์โปรแกรม

ใช้คำสั่ง

```bash
gcc name1.c -o name2
```

### อธิบายคำสั่ง

- `gcc` เรียกใช้งาน GNU C Compiler
- `name1.c` คือไฟล์ต้นฉบับ
- `-o` ใช้กำหนดชื่อไฟล์ที่ได้หลังคอมไพล์
- `name2` คือชื่อโปรแกรมที่สร้างขึ้น

เมื่อคอมไพล์สำเร็จจะได้ไฟล์โปรแกรมชื่อ

```text
name2
```

## ตัวอย่าง Workflow

สร้างไฟล์

```text
hello.c
```

คอมไพล์

```bash
gcc hello.c -o hello
```

รัน

```bash
./hello
```

| คำสั่ง | ความหมาย |
|---------|----------|
| `gcc --version` | ตรวจสอบการติดตั้ง GCC |
| `gcc name1.c -o name2` | คอมไพล์โปรแกรม |
| `./name2` | รันโปรแกรม |
| `.\name2.exe` | รันโปรแกรมเหมือนกันแต่คนละสี |
