# ENGCE117
## Computer Programming for Computer Engineer

---

# Course Overview

ENGCE117 (Computer Programming for Computer Engineer) introduces fundamental programming concepts and problem-solving techniques for computer engineering students. The course focuses on structured programming, algorithm development, software design principles, and practical programming implementation.

Students learn how to translate engineering problems into computational solutions using modern programming languages and development tools.

---

# Course Objectives

After completing this course, students should be able to:

- Understand fundamental programming concepts
- Analyze computational problems
- Design algorithms using logical thinking
- Use variables and data types correctly
- Apply control structures effectively
- Develop modular programs using functions
- Manipulate arrays and strings
- Understand file processing techniques
- Perform debugging and testing
- Develop simple engineering applications

---

# Learning Topics

---

## Introduction to Programming

Programming is the process of creating a set of instructions that a computer can execute.

Basic steps:

```text
Problem Analysis
      ↓
Algorithm Design
      ↓
Coding
      ↓
Compilation
      ↓
Execution
      ↓
Testing
      ↓
Maintenance
```

---

## Algorithm Design

An algorithm is a finite sequence of well-defined instructions used to solve a problem.

Characteristics:

- Finite
- Unambiguous
- Efficient
- Correct
- Repeatable

Example:

```text
Start
Read A
Read B
Sum = A + B
Display Sum
End
```

---

## Flowcharts

Flowcharts are graphical representations of algorithms.

Common Symbols:

### Start / End

```text
Oval
```

### Process

```text
Rectangle
```

### Decision

```text
Diamond
```

### Input / Output

```text
Parallelogram
```

---

# Programming Fundamentals

---

## Variables

A variable is a named storage location used to hold data.

Example:

```c
int age = 20;
```

---

## Constants

Constants are values that do not change during program execution.

Example:

```c
const float PI = 3.14159;
```

---

## Data Types

### Integer

```c
int number = 10;
```

### Floating Point

```c
float temperature = 36.5;
```

### Character

```c
char grade = 'A';
```

### String

```c
char name[] = "Computer Engineering";
```

---

# Operators

---

## Arithmetic Operators

```text
+ Addition
- Subtraction
* Multiplication
/ Division
% Modulus
```

Example:

```c
result = a + b;
```

---

## Relational Operators

```text
==
!=
>
<
>=
<=
```

Example:

```c
if(a > b)
```

---

## Logical Operators

```text
&&  Logical AND
||  Logical OR
!   Logical NOT
```

Example:

```c
if(a > b && b > c)
```

---

# Control Structures

---

## Sequential Execution

Statements execute one after another.

```c
a = 5;
b = 10;
c = a + b;
```

---

## Selection Statements

### if Statement

```c
if(score >= 50)
{
    printf("Pass");
}
```

---

### if-else Statement

```c
if(score >= 50)
{
    printf("Pass");
}
else
{
    printf("Fail");
}
```

---

### switch Statement

```c
switch(choice)
{
    case 1:
        break;

    case 2:
        break;
}
```

---

## Iteration Statements

### for Loop

```c
for(int i=0;i<10;i++)
{
    printf("%d",i);
}
```

---

### while Loop

```c
while(condition)
{
    statement;
}
```

---

### do-while Loop

```c
do
{
    statement;
}
while(condition);
```

---

# Functions

Functions improve modularity and code reuse.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Benefits:

- Reusability
- Maintainability
- Better organization
- Easier debugging

---

# Arrays

Arrays store multiple values of the same data type.

Example:

```c
int score[5];
```

Initialization:

```c
int score[5] = {10,20,30,40,50};
```

---

# Strings

Strings are arrays of characters.

Example:

```c
char name[] = "ENGCE117";
```

Common Functions:

```c
strlen()
strcpy()
strcat()
strcmp()
```

---

# Pointers

Pointers store memory addresses.

Example:

```c
int x = 10;
int *ptr = &x;
```

Benefits:

- Dynamic memory management
- Efficient data access
- Advanced programming techniques

---

# Structures

Structures combine multiple data types.

Example:

```c
struct Student
{
    int id;
    char name[50];
};
```

---

# File Handling

File processing allows data storage and retrieval.

Example:

```c
FILE *fp;
fp = fopen("data.txt","r");
```

Operations:

```text
Open
Read
Write
Append
Close
```

---

# Debugging and Testing

Debugging is the process of finding and fixing errors in software.

Types of Errors:

### Syntax Errors

```c
printf("Hello")
```

Missing:

```c
;
```

---

### Runtime Errors

Example:

```c
division by zero
```

---

### Logical Errors

Program runs but produces incorrect output.

---

# Development Tools

---

## Visual Studio Code (VS Code)

Visual Studio Code is a lightweight and extensible source code editor.

Recommended Extensions:

### C/C++

```text
Microsoft C/C++ Extension
```

Provides:

- IntelliSense
- Debugging
- Code completion
- Syntax highlighting

---

### Code Runner

Run programs directly inside VS Code.

Supported Languages:

- C
- C++
- Python
- Java
- JavaScript

---

### Error Lens

Displays compiler diagnostics directly in the editor.

---

### GitLens

Provides advanced Git integration.

---

# GCC Compiler

The GNU Compiler Collection (GCC) is commonly used for compiling C programs.

Compile:

```bash
gcc program.c -o program
```

Run:

```bash
./program
```

Windows:

```powershell
program.exe
```

---

# Git and GitHub

Git is a distributed version control system.

GitHub is a cloud platform for source code hosting and collaboration.

---

## Git Workflow

Clone Repository

```bash
git clone <repository-url>
```

Check Status

```bash
git status
```

Add Files

```bash
git add .
```

Commit Changes

```bash
git commit -m "Update project"
```

Push Changes

```bash
git push
```

---

# Repository Structure

The repository contains programming exercises, laboratory assignments, and examples related to:

```text
Programming Fundamentals
Control Structures
Functions
Arrays
Strings
Structures
File Handling
Problem Solving
```

Each laboratory exercise is designed to strengthen practical programming skills and computational thinking.

---

# Learning Outcomes

Upon successful completion of ENGCE117, students will be able to:

- Design algorithms systematically
- Implement programs using C programming language
- Apply programming concepts to engineering problems
- Debug and test software effectively
- Use development tools professionally
- Manage projects using Git and GitHub
- Develop a strong foundation for advanced computer engineering courses

---

# References

1. Paul Deitel, *C How to Program*
2. Brian W. Kernighan and Dennis Ritchie, *The C Programming Language*
3. Yashavant Kanetkar, *Let Us C*
4. GCC Documentation
5. Git Documentation
6. Visual Studio Code Documentation

---

**Course:** ENGCE117 – Computer Programming for Computer Engineer  
**Focus Areas:** Programming Fundamentals, Problem Solving, Algorithm Design, Software Development, Git & GitHub
