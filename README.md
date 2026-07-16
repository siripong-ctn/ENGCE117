# ENGCE117
## Computer Programming for Computer Engineer

---

# 1. C Programming

C is a procedural programming language widely used for system programming, embedded systems, and performance-critical applications.

### Key Concepts
- Variables and Data Types
- Control Structures (`if`, `switch`, `for`, `while`)
- Functions
- Pointers
- Memory Management

### Example
```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

---

# 2. C++ Programming

C++ extends C by adding Object-Oriented Programming (OOP) features.

### Key Concepts
- Classes and Objects
- Inheritance
- Polymorphism
- Encapsulation
- Abstraction

### Example
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void show() {
        cout << name;
    }
};

int main() {
    Student s;
    s.name = "John";
    s.show();
}
```

---

# 3. Function

A function is a reusable block of code that performs a specific task.

### Benefits
- Reduces code duplication
- Improves readability
- Easier maintenance

### Example
```c
int add(int a, int b) {
    return a + b;
}

int result = add(5, 3);
```

---

# 4. Array

An array stores multiple values of the same type in contiguous memory locations.

### Characteristics
- Fixed size
- Indexed access
- Fast retrieval

### Example
```c
int numbers[5] = {10, 20, 30, 40, 50};

printf("%d", numbers[2]); // 30
```

---

# 5. String

A string is a sequence of characters terminated by `'\0'`.

### Common Operations
- Input/Output
- Concatenation
- Comparison
- Search

### Example
```c
char name[] = "Computer";

printf("%s", name);
```

---

# 6. Structure

A structure groups related variables of different data types into a single unit.

### Example
```c
struct Student {
    int id;
    char name[20];
};

struct Student s1 = {1, "Alice"};
```

### Output
```
ID: 1
Name: Alice
```

---

# 7. Pointer

A pointer stores the memory address of another variable.

### Advantages
- Dynamic memory allocation
- Efficient parameter passing
- Data structure implementation

### Example
```c
int x = 10;
int *ptr = &x;

printf("%d", *ptr);
```

### Output
```
10
```

---

# 8. Singly Linked List

A linked list where each node points to the next node only.

### Node Structure
```c
struct Node {
    int data;
    struct Node* next;
};
```

### Visualization
```
[10] -> [20] -> [30] -> NULL
```

### Advantages
- Dynamic size
- Easy insertion and deletion

---

# 9. Doubly Linked List

A linked list where each node contains pointers to both previous and next nodes.

### Node Structure
```c
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
```

### Visualization
```
NULL <- [10] <-> [20] <-> [30] -> NULL
```

### Advantages
- Bidirectional traversal
- Faster deletion

---

# 10. Object Linked List

A linked list implemented using classes and objects in C++.

### Example
```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
```

### Visualization
```
Object1 -> Object2 -> Object3 -> NULL
```

---

# 11. File Handling

File handling allows programs to store and retrieve data from files.

### Operations
- Create
- Open
- Read
- Write
- Close

### Example
```c
FILE *file;

file = fopen("data.txt", "w");
fprintf(file, "Hello File");
fclose(file);
```

### Result
```
data.txt
-----------
Hello File
```

---

# 12. Recursion

Recursion is a technique where a function calls itself.

### Requirements
- Base Case
- Recursive Case

### Example: Factorial
```c
int factorial(int n) {
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}
```

### Example
```
factorial(5)
= 5×4×3×2×1
= 120
```

---

# 13. Divide and Conquer

An algorithm design technique that divides a problem into smaller subproblems.

### Steps
1. Divide
2. Conquer
3. Combine

### Example: Binary Search

```c
int arr[] = {2,4,6,8,10};
```

Searching for `8`

```
Middle = 6
Search Right Half

Middle = 8
Found
```

### Applications
- Merge Sort
- Quick Sort
- Binary Search

---

# 14. Greedy Algorithm

A method that chooses the best immediate solution at every step.

### Characteristics
- Local optimum choice
- Fast execution
- Not always globally optimal

### Example: Coin Change

Coins:
```
25, 10, 5, 1
```

Amount:
```
41
```

Selection:
```
25 + 10 + 5 + 1
```

Total Coins:
```
4 Coins
```

### Applications
- Huffman Coding
- Activity Selection
- Minimum Spanning Tree

---

# 15. DAG (Directed Acyclic Graph)

A graph with directed edges and no cycles.

### Example
```
A → B → D
↓
C → D
```

### Characteristics
- No circular path
- Represents dependencies

### Applications
- Task Scheduling
- Build Systems
- Project Management

---

# 16. Backtracking

Backtracking systematically searches for a solution by trying choices and undoing invalid ones.

### Process
1. Choose
2. Explore
3. Backtrack if invalid

### Example: Maze Solving

```
S . .
X X .
. . E
```

Path:
```
S → Right → Right → Down → Down → E
```

### Applications
- Sudoku Solver
- N-Queens Problem
- Maze Solver

---

# 17. Bisection Method

A numerical method used to find the root of an equation.

### Idea
Repeatedly divide an interval into two halves and select the interval containing the root.

### Example

Equation:
```
f(x) = x² - 4
```

Initial Interval:
```
[1,5]
```

Iterations:
```
Mid = 3  → f(3)=5
Mid = 2  → f(2)=0
```

Root:
```
x = 2
```

### Advantages
- Simple implementation
- Stable and reliable
- Guaranteed convergence when conditions are satisfied

---

# Summary

This course covers fundamental programming concepts using **C and C++**, including **Functions, Arrays, Strings, Structures, and Pointers**. It also introduces essential **Data Structures** such as **Singly Linked Lists, Doubly Linked Lists, and Object Linked Lists**, along with **File Handling** techniques. Advanced problem-solving techniques include **Recursion, Divide and Conquer, Greedy Algorithms, DAGs, Backtracking, and the Bisection Method**, which are fundamental for software development and computer engineering.
