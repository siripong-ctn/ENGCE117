# ENGCE117
## Computer Programming for Computer Engineer

---

# C Programming Setup Guide

A beginner-friendly guide to installing a C compiler, writing your first program, and executing it on Windows, macOS, and Linux.

---

## 🚀 Quick Start (TL;DR)

If you already have a C compiler installed, run these commands in your terminal:

```bash
# 1. Compile the code
gcc main.c -o my_program

# 2. Run the executable
./my_program     # Linux/macOS
my_program.exe   # Windows
```

---

## 🛠️ 1. Install a C Compiler

Choose the installation instructions for your specific operating system below.

### 🪟 Windows (Using MinGW-w64)
1. Download the [MSYS2 Installer](https://msys2.org) or [MinGW-w64](https://mingw-w64.org).
2. Complete the installation wizard.
3. Open your Windows **Command Prompt** or **PowerShell** and run the following setup command:
   ```bash
   pacman -S --needed base-devel mingw-w64-x86_64-toolchain
   ```
4. Add the `bin` folder path (e.g., `C:\msys64\mingw64\bin`) to your system's **Environment Variables** under the `Path` variable.

### 🍎 macOS (Using Apple Clang)
Mac computers come with `clang`, which functions exactly like `gcc` for standard compilation.
1. Open your terminal.
2. Trigger the command-line developer tools installation:
   ```bash
   xcode-select --install
   ```
3. Click **Install** on the pop-up window that appears.

### 🐧 Linux (Using GCC)
Update your local package manager index and install the development packages.

* **Ubuntu / Debian / Mint:**
  ```bash
  sudo apt update
  sudo apt install build-essential
  ```
* **Fedora / RHEL / CentOS:**
  ```bash
  sudo dnf groupinstall "Development Tools"
  ```

---

## 🔍 2. Verify Your Installation

Restart your terminal application and type the following command to verify the compiler is working properly:

```bash
gcc --version
```

If a version number outputs on the screen, your compiler is ready to use!

---

## 📝 3. Write, Compile, and Run Your Code

### Step 1: Create a Source File
Create a new file named `hello.c` and paste this basic "Hello, World!" blueprint into it:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Step 2: Compile the Code
The compiler translates your readable code into machine language. Run this command to build your executable:

```bash
gcc hello.c -o hello
```
* `hello.c`: Your input source file.
* `-o hello`: Specifies the custom name of the output program file.

### Step 3: Run the Program

* **On Linux / macOS:**
  ```bash
  ./hello
  ```

* **On Windows (CMD or PowerShell):**
  ```cmd
  hello.exe
  ```

**Expected Output:**
```text
Hello, World!
```

---

## 💡 Troubleshooting Tips

* **`'gcc' is not recognized...`**: This means your compiler's binary path was not added to your system environment variables correctly. Restart your computer or double-check your `Path` setup.
* **Permission Denied (Linux/macOS)**: If `./hello` throws an error, make sure the file has permission to run by executing `chmod +x hello` first.
