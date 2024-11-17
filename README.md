# C++ Module 01 - Memory Allocation, Pointers, References, and Switch Statement

This module introduces key concepts in C++ programming, including memory management, pointer and reference handling, and the usage of the switch statement. These foundational skills will enhance your understanding of object-oriented programming (OOP) and prepare you for more advanced C++ projects.

## Project Purpose

The purpose of this module is to deepen your understanding of memory allocation, pointers, and references while learning to implement clean, structured C++ code. Through a series of exercises, you will create practical solutions to common problems using pointers, references, and other tools, enabling you to work more effectively in C++.

This project is also a stepping stone to mastering the switch statement, a powerful control structure in C++.

## Exercises Overview

### Exercise 00: BraiiiiiiinnnzzzZ
**Objective:** Implement a basic `Zombie` class that announces itself using the format:
`<name>: BraiiiiiiinnnzzzZ...`.
The exercise highlights the difference between allocating memory on the stack versus the heap and how to manage the lifecycle of objects with proper destructors.

**Why This Exercise?** This task introduces basic memory allocation principles, object creation, and destruction in C++, ensuring proper resource management.

---

### Exercise 01: Moar brainz!
**Objective:** Create a `zombieHorde` function that allocates multiple `Zombie` objects in a single allocation.
The function must initialize and return all Zombies with a given name, demonstrating efficient memory allocation for multiple objects.

**Why This Exercise?** This exercise emphasizes the efficient use of memory and dynamic allocation for creating arrays of objects in C++.

---

### Exercise 02: HI THIS IS BRAIN
**Objective:** Write a program that demonstrates the use of pointers and references.
Use a string variable, a pointer to the string, and a reference to the string to print their respective memory addresses and values.

**Why This Exercise?** This task demystifies the concepts of pointers and references, offering a practical approach to understanding their usage.

---

### Exercise 03: Unnecessary Violence
**Objective:** Implement `Weapon`, `HumanA`, and `HumanB` classes.
`HumanA` always has a weapon, while `HumanB` may acquire one later. Implement member functions like `attack()` to display formatted attack messages.

**Why This Exercise?** This task explores class relationships, composition, and member functions, showcasing how objects can interact dynamically in a program.

---

### Exercise 04: Sed is for losers
**Objective:** Create a program that replaces all occurrences of a string (`s1`) with another string (`s2`) in a file, writing the result to `<filename>.replace`.
External libraries and `std::string::replace` are not allowed, encouraging creative problem-solving with available tools.

**Why This Exercise?** This exercise introduces file manipulation and string processing, fundamental skills for developing real-world applications.

---

### Exercise 05: Harl 2.0
**Objective:** Implement the `Harl` class with four log levels: `DEBUG`, `INFO`, `WARNING`, and `ERROR`.
Use pointers to member functions for handling log messages dynamically.

**Why This Exercise?** This task teaches the use of pointers to member functions, offering an alternative to conditional logic like `if` or `switch`.

---

### Exercise 06: Harl Filter
**Objective:** Extend the `Harl` class to filter log messages based on a given log level.
Implement this functionality using the `switch` statement for cleaner and more efficient control flow.

**Why This Exercise?** This exercise introduces the `switch` statement and demonstrates its practical application in filtering data.

---

## Compilation and Testing

Each exercise is organized in its respective directory (`ex00/`, `ex01/`, etc.). To compile and test your code, navigate to the corresponding directory and use the provided Makefile:

```bash
cd ex00
make
./your_executable
