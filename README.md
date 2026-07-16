# ENGCE117 - Computer Programming for Computer Engineer

## C Programming
ภาษาโปรแกรมเชิงกระบวนการ (Procedural Programming) ที่เน้นการทำงานเป็นขั้นตอน มีประสิทธิภาพสูงและเข้าถึงหน่วยความจำได้โดยตรง

**จุดเด่น**
- เร็วและใช้ทรัพยากรน้อย
- เหมาะกับ System Programming และ Embedded System
- รองรับ Pointer และ Memory Management

---

## C++ Programming
ภาษาที่พัฒนาต่อยอดจาก C โดยเพิ่มแนวคิด OOP (Object-Oriented Programming)

**คุณสมบัติหลัก**
- Class และ Object
- Inheritance
- Polymorphism
- Encapsulation
- Reusability สูง

---

## Function
กลุ่มคำสั่งที่ถูกจัดเก็บไว้เพื่อเรียกใช้งานซ้ำได้

**ข้อดี**
- ลดการเขียนโค้ดซ้ำ
- ทำให้โปรแกรมเป็นระบบ
- ง่ายต่อการแก้ไขและบำรุงรักษา

**ประเภท**
- Built-in Function
- User-defined Function

---

## Array
โครงสร้างข้อมูลที่เก็บข้อมูลชนิดเดียวกันหลายค่าในหน่วยความจำที่ต่อเนื่องกัน

**ลักษณะ**
- เข้าถึงข้อมูลด้วย Index
- ขนาดคงที่
- ค้นหาข้อมูลได้รวดเร็ว

**ประเภท**
- One-Dimensional Array
- Multi-Dimensional Array

---

## String
ชุดของตัวอักษรที่เก็บในรูปแบบ Array ของ Character และจบด้วย `'\0'`

**การใช้งานหลัก**
- รับและแสดงข้อความ
- เปรียบเทียบข้อความ
- เชื่อมข้อความ
- ค้นหาข้อความ

---

## Structure
โครงสร้างข้อมูลที่สามารถเก็บข้อมูลหลายชนิดไว้ภายในตัวแปรเดียวกัน

**ประโยชน์**
- จัดเก็บข้อมูลที่เกี่ยวข้องกัน
- ใช้สร้าง Record ของข้อมูล
- เป็นพื้นฐานของ Data Structure อื่น ๆ

---

## Pointer
ตัวแปรที่เก็บ Address ของตัวแปรอื่น

**ประโยชน์**
- จัดการหน่วยความจำ
- ส่งข้อมูลเข้าฟังก์ชันแบบอ้างอิง
- ใช้สร้าง Linked List และ Data Structure ต่าง ๆ

**Operator สำคัญ**
- `&` : Address Of
- `*` : Dereference

---

## Singly Linked List
โครงสร้างข้อมูลแบบเชื่อมโยงที่แต่ละ Node ชี้ไปยัง Node ถัดไปเพียงตัวเดียว

**องค์ประกอบ**
- Data
- Next Pointer

**ข้อดี**
- เพิ่ม/ลบข้อมูลได้ง่าย
- ไม่ต้องกำหนดขนาดล่วงหน้า

---

## Doubly Linked List
Linked List ที่แต่ละ Node มี Pointer สองตัว

**องค์ประกอบ**
- Previous Pointer
- Data
- Next Pointer

**ข้อดี**
- เดินข้อมูลได้ทั้งหน้าและหลัง
- ลบ Node ได้สะดวกกว่า Singly Linked List

---

## Object Linked List
Linked List ที่เก็บข้อมูลในรูปแบบ Object หรือ Class

**คุณสมบัติ**
- รองรับ OOP
- จัดการข้อมูลซับซ้อนได้ดี
- ใช้สร้างระบบจัดเก็บข้อมูลขนาดใหญ่

---

## File Handling
การจัดการไฟล์สำหรับบันทึกและอ่านข้อมูลจาก Storage

**การทำงานหลัก**
- Create File
- Open File
- Read File
- Write File
- Close File

**ประโยชน์**
- เก็บข้อมูลถาวร
- ใช้จัดการฐานข้อมูลขนาดเล็ก

---

## Recursion
เทคนิคที่ฟังก์ชันเรียกใช้งานตัวเอง

**องค์ประกอบสำคัญ**
- Base Case
- Recursive Case

**ตัวอย่างการใช้งาน**
- Factorial
- Fibonacci
- Tree Traversal

---

## Divide and Conquer
เทคนิคแก้ปัญหาโดยแบ่งปัญหาใหญ่เป็นปัญหาย่อย

**ขั้นตอน**
1. Divide
2. Conquer
3. Combine

**ตัวอย่าง**
- Merge Sort
- Quick Sort
- Binary Search

---

## Greedy Algorithm
อัลกอริทึมที่เลือกคำตอบที่ดีที่สุดในแต่ละขั้นตอน

**แนวคิด**
- ตัดสินใจทันที (Local Optimal)
- หวังให้ได้ผลลัพธ์ดีที่สุดโดยรวม

**ตัวอย่าง**
- Activity Selection
- Huffman Coding
- Minimum Spanning Tree

---

## DAG (Directed Acyclic Graph)
กราฟแบบมีทิศทางและไม่มีวงจร

**คุณสมบัติ**
- เดินตามเส้นทางแล้วไม่กลับมาจุดเดิม
- ใช้แสดงลำดับก่อนหลังของงาน

**การประยุกต์**
- Task Scheduling
- Dependency Management
- Topological Sorting

---

## Backtracking
เทคนิคค้นหาคำตอบโดยลองทำและย้อนกลับเมื่อไม่ถูกต้อง

**หลักการ**
1. เลือกทางเลือก
2. ตรวจสอบเงื่อนไข
3. หากไม่ถูกต้องให้ย้อนกลับ

**ตัวอย่าง**
- N-Queen
- Sudoku Solver
- Maze Solver

---

## Bisection Method
วิธีหาค่ารากของสมการโดยแบ่งช่วงครึ่งหนึ่งซ้ำ ๆ

**หลักการ**
- กำหนดช่วง `[a,b]`
- เลือกค่ากลาง `c`
- ตรวจสอบเครื่องหมายของฟังก์ชัน
- ลดช่วงจนได้ค่าที่ต้องการ

**ข้อดี**
- เข้าใจง่าย
- มีความเสถียรสูง
- เหมาะกับการคำนวณเชิงตัวเลข

---

## สรุป
เนื้อหาในรายวิชา ENGCE117 ครอบคลุมพื้นฐานการเขียนโปรแกรมด้วย C/C++ การจัดการข้อมูลด้วย Array, String, Structure และ Pointer รวมถึง Data Structure เช่น Linked List และเทคนิค Algorithm สำคัญ ได้แก่ Recursion, Divide and Conquer, Greedy, DAG, Backtracking และ Bisection Method ซึ่งเป็นพื้นฐานสำคัญสำหรับการพัฒนาซอฟต์แวร์และการแก้ปัญหาทางวิศวกรรมคอมพิวเตอร์
