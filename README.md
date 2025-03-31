<h1 align="center">_printf</h1>

<p align="center"><img src="https://i.imgur.com/9K3D5Cz.png" alt="_printf logo" width="400"/></p>

<p align="center">✨ <i>Because sometimes, we need to build our own tools to truly understand them</i> ✨</p>

## 🔍 Overview

Welcome to the `_printf` project – a journey into the heart of C's most versatile function! This is not just another printf implementation; it's an educational adventure that demystifies one of programming's most powerful tools by building it from scratch.

This custom implementation mirrors the core functionality of the standard C library's printf() while providing a transparent view of its inner workings – perfect for those who believe in learning by doing.

## 🧠 The Philosophy Behind _printf

The standard printf() function often seems like magic – a black box that somehow formats and displays our data. This project strips away that mystery by implementing a function that does the same job, but with code we can see, understand, and modify.

By building our own version of printf(), we gain:
- Deep insight into variadic functions in C
- Mastery of string parsing and formatting
- Understanding of type conversion mechanisms
- Appreciation for the elegant design of C's standard library

## 🔄 Return Value

- On success: Returns the total count of characters printed (excluding the null byte)
- On failure: Returns -1 when errors are encountered

## 📁 File Structure

**_printf.c**
- Core implementation of the _printf() function
- Handles format string parsing and dispatch to appropriate handlers

**utils.c**
- Contains the essential helper functions:
  - `_putchar`: The fundamental character output function
  - `print_char`: Converts and outputs character arguments
  - `print_string`: Processes and displays string arguments
  - `print_integer`: Transforms numeric values into readable output

**main.h**
- Header containing function prototypes and necessary includes
- Defines the structure of the _printf ecosystem

## 🎯 Format Specifiers

The `%` character serves as the gateway to formatting, followed by these specifiers:

| Specifier | Purpose | Example Output |
|-----------|---------|----------------|
| %c | Single character | 'A' |
| %s | String of characters | "Hello, World!" |
| %d | Signed decimal integer | -42 |
| %i | Same as %d | 42 |
| %% | Literal percentage sign | % |

## 🚀 Getting Started

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c
```

### Execution

```bash
./a.out
```

## 💻 Usage Example

```c
#include "main.h"

int main(void)
{
    _printf("The answer to life, the universe, and everything is %d.\n", 42);
    _printf("Character: %c, String: %s, Percent: %%\n", 'X', "success");
    
    int chars_printed = _printf("This printed %d characters.\n", 24);
    _printf("The previous line printed %d characters.\n", chars_printed);
    
    return (0);
}
```

Output:
```
The answer to life, the universe, and everything is 42.
Character: X, String: success, Percent: %
This printed 24 characters.
The previous line printed 38 characters.
```

## 👨‍💻 Contributor

Crafted with curiosity and code by **Bruno Salle**

---

<p align="center"><i>"The printf() function is like a Swiss Army knife – versatile, reliable, and everyone should know how to build one."</i></p>
