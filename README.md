# 🚀 The Ultimate C Programming Language

Welcome to **The Ultimate C Programming Language** repository! This repository is a comprehensive, structured guide to learning C programming from fundamental concepts to advanced topics, complete with hands-on practice problems, matrix operation scripts, and a real-world console project.

---

## 📚 Table of Contents

- [Overview](#-overview)
- [Repository Structure](#-repository-structure)
- [Chapter Breakdown](#-chapter-breakdown)
- [Projects](#-projects)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Compiling and Running Code](#compiling-and-running-code)
- [Contributing](#-contributing)
- [License](#-license)

---

## 🎯 Overview

C is a powerful, low-level procedural programming language that serves as the foundation for modern software development, operating systems, and embedded systems. 

This repository covers:
- Core syntax, data types, and operators
- Control structures (Conditionals & Loops)
- Functions, recursion, and scope
- Pointers and memory management
- Arrays, 2D matrices (Addition, Multiplication, Transpose), and dynamic memory allocation (`malloc`, `calloc`, `free`, `realloc`)
- User-defined data types (`struct`, `typedef`)
- File input/output operations
- Interactive mini-project

---

## 📁 Repository Structure

```text
.
├── CHAPTER - 00/                  # Introduction & Hello World
├── CHAPTER - 01/                  # Variables, Constants & Data Types
├── CHAPTER - 01_PRACTICE SET/     # Practice problems for Chapter 01
├── CHAPTER - 02/                  # Instructions & Operators
├── CHAPTER - 02_PRACTICE SET/     # Practice problems for Chapter 02
├── CHAPTER - 03/                  # Conditional Statements
├── CHAPTER - 03_PRACTICE SET/     # Practice problems for Chapter 03
├── CHAPTER - 04/                  # Loop Control Instructions
├── CHAPTER - 04_PRACTICE SET/     # Practice problems for Chapter 04
├── CHAPTER - 05/                  # Functions & Recursion
├── CHAPTER - 05_PRACTICE SET/     # Practice problems for Chapter 05
├── CHAPTER - 06/                  # Pointers & Memory Basics
├── CHAPTER - 06_PRACTICE SET/     # Practice problems for Chapter 06
├── CHAPTER - 07/                  # Arrays & 2D Arrays
├── CHAPTER - 07_PRACTICE SET/     # Practice problems for Chapter 07
├── CHAPTER - 08/                  # Strings & Standard String Library
├── CHAPTER - 08_PRACTICE SET/     # Practice problems for Chapter 08
├── CHAPTER - 09/                  # Structures & typedef
├── CHAPTER - 09_PRACTICE SET/     # Practice problems for Chapter 09
├── CHAPTER - 10/                  # File I/O Operations
├── CHAPTER - 10_PRACTICE SET/     # Practice problems for Chapter 10
├── CHAPTER - 11/                  # Dynamic Memory Allocation
├── CHAPTER - 11_PRACTICE SET/     # Practice problems for Chapter 11
├── PROJECT - 01/                  # Game 1: Number Guessing Game
└── array/                         # Matrix operations (Addition, Multiplication, Transpose)
```

---

## 📖 Chapter Breakdown

| Chapter | Topic | Key Concepts Covered |
| :--- | :--- | :--- |
| **Chapter 00** | First Program | Environment setup, basic C program structure, `main()` function |
| **Chapter 01** | Variables & Data Types | Variables, data types (`int`, `float`, `char`), `printf`, `scanf`, escape sequences |
| **Chapter 02** | Instructions & Operators | Arithmetic operations, type conversion, operator precedence & associativity, typecasting |
| **Chapter 03** | Conditional Statements | `if-else`, ternary operators, `switch-case`, logical operators |
| **Chapter 04** | Loop Control Instructions | `while`, `do-while`, `for` loops, `break` and `continue` statements |
| **Chapter 05** | Functions & Recursion | Function declaration/definition, parameters, return values, recursive functions |
| **Chapter 06** | Pointers | Pointer variables, dereferencing (`*`), address-of (`&`), call by value vs call by reference |
| **Chapter 07** | Arrays | 1D & 2D arrays, array memory representation, pointer arithmetic with arrays |
| **Chapter 08** | Strings | Character arrays, string input/output (`gets`, `puts`), string helper functions (`strlen`, `strcpy`, `strcat`, `strcmp`) |
| **Chapter 09** | Structures | Defining structures, arrays of structures, structure pointers, `typedef` keyword |
| **Chapter 10** | File I/O | Reading & writing files (`fopen`, `fclose`), character I/O (`fgetc`, `fputc`), file modes |
| **Chapter 11** | Dynamic Memory | Memory allocation functions: `malloc`, `calloc`, `free`, and `realloc` |

---

## 🎮 Projects

### 🎲 Project 1: Number Guessing Game (`PROJECT - 01`)
An interactive CLI game where the computer generates a random number and the player attempts to guess it in the minimum number of attempts with higher/lower hints.

---

## 🛠️ Getting Started

### Prerequisites

To compile and run the C programs in this repository, you need a C compiler installed on your system:
- **Windows**: MinGW-w64 / GCC or MSVC
- **macOS**: Xcode Command Line Tools (Clang)
- **Linux**: GCC (`sudo apt install build-essential`)

### Compiling and Running Code

1. **Clone the Repository**
   ```bash
   git clone https://github.com/Gaurav-BCA/Learning-C.git
   cd Learning-C
   ```

2. **Compile a `.c` File**
   Using GCC:
   ```bash
   gcc "CHAPTER - 01/01_variable.c" -o variable
   ```

3. **Run the Executable**
   - **Linux / macOS**:
     ```bash
     ./variable
     ```
   - **Windows**:
     ```cmd
     variable.exe
     ```

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check out the repository, solve practice problems, or submit pull requests with improvements.

---

⭐ If you find this repository helpful, don't forget to give it a star on GitHub!
