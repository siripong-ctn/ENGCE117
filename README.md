# ENGCE117 - Computer Programming for Computer Engineer

## การเริ่มต้นใช้งานภาษา C

## 1. ติดตั้ง C Compiler

### Windows
แนะนำให้ติดตั้ง **MinGW-w64** หรือ **MSYS2** ซึ่งมี GCC Compiler

ตรวจสอบการติดตั้งด้วยคำสั่ง

```bash
gcc --version
```

หากแสดงเวอร์ชันของ GCC แสดงว่าติดตั้งเรียบร้อยแล้ว

### Linux (Ubuntu/Debian)

```bash
sudo apt update
sudo apt install build-essential
```

ตรวจสอบการติดตั้ง

```bash
gcc --version
```

### macOS

ติดตั้ง Xcode Command Line Tools

```bash
xcode-select --install
```

ตรวจสอบการติดตั้ง

```bash
gcc --version
```

---

## 2. สร้างไฟล์โปรแกรมภาษา C

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

---

## 3. คอมไพล์โปรแกรม

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

---

## 4. รันโปรแกรม

บน Linux หรือ macOS

```bash
./name2
```

ผลลัพธ์

```text
Hello, World!
```

บน Windows

```bash
name2.exe
```

หรือ

```bash
.\name2.exe
```

---

## 5. ตัวอย่าง Workflow

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

---

## สรุปคำสั่งที่ใช้บ่อย

| คำสั่ง | ความหมาย |
|---------|----------|
| `gcc --version` | ตรวจสอบการติดตั้ง GCC |
| `gcc name1.c -o name2` | คอมไพล์โปรแกรม |
| `./name2` | รันโปรแกรม (Linux/macOS) |
| `.\name2.exe` | รันโปรแกรม (Windows) |
