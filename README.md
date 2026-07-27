# ENGCE117 - Computer Programming for Computer Engineer

## การเริ่มต้นใช้งานภาษา C

เอกสารนี้อธิบายขั้นตอนการติดตั้ง C Compiler การคอมไพล์โปรแกรม และการตั้งค่า Visual Studio Code เพื่อใช้พัฒนาโปรแกรมภาษา C

---

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

## 5. ติดตั้ง Visual Studio Code

ดาวน์โหลดและติดตั้ง

https://code.visualstudio.com/

---

## 6. ส่วนเสริม (Extensions) ที่แนะนำสำหรับภาษา C

ติดตั้ง Extensions ต่อไปนี้

### 1. C/C++

ผู้พัฒนา: Microsoft

ความสามารถ

- Syntax Highlight
- IntelliSense
- Debugging
- Code Navigation

---

### 2. C/C++ Extension Pack

รวมส่วนเสริมที่จำเป็นสำหรับการพัฒนา C/C++

---

### 3. Code Runner

ช่วยรันโปรแกรมได้อย่างรวดเร็วจากภายใน VS Code

---

### 4. Error Lens

แสดง Error และ Warning ภายในโค้ดทันที ทำให้อ่านข้อผิดพลาดได้ง่ายขึ้น

---

### 5. Better Comments

ช่วยเพิ่มสีของ Comment เพื่อให้อ่านโค้ดได้สะดวก

---

### 6. Material Icon Theme (แนะนำ)

เปลี่ยนไอคอนของไฟล์และโฟลเดอร์ให้ดูง่ายขึ้น

---

## 7. ตัวอย่าง Workflow

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

---

## หมายเหตุ

- ควรติดตั้ง GCC ให้เรียบร้อยก่อนเริ่มเขียนโปรแกรม
- ใช้ VS Code ร่วมกับ Extension **C/C++** เพื่อให้เขียนและแก้ไขโค้ดได้สะดวก
- หากคอมไพล์ไม่ผ่าน ควรตรวจสอบข้อความ Error ที่แสดงบน Terminal เพื่อแก้ไขปัญหา
