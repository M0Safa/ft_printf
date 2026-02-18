# 🖨️ ft_printf

## 🏫 42 Beirut Project

**ft_printf** is a project at 42 where the objective is to recreate a simplified version of the standard C `printf()` function.

The goal is to understand how formatted output works internally, handle variadic arguments, and build a flexible formatting system from scratch.

---

## 🎯 Project Objectives

- Recreate a minimal version of `printf`
- Understand variadic functions in C
- Parse and handle format specifiers
- Manage memory carefully
- Write modular and well-structured code
- Respect the 42 Norm coding standard

---

## ⚙️ Supported Format Specifiers

This implementation handles the following conversions:

- `%c` → Character  
- `%s` → String  
- `%p` → Pointer address  
- `%d` → Decimal (signed integer)  
- `%i` → Integer  
- `%u` → Unsigned decimal  
- `%x` → Lowercase hexadecimal  
- `%X` → Uppercase hexadecimal  
- `%%` → Percent sign  

---

## 🧠 Key Concepts Learned

Through this project, I developed a deeper understanding of:

- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
- Type conversion and formatting
- Integer to string conversion
- Base conversion (decimal ↔ hexadecimal)
- Memory and buffer management
- Writing clean and reusable helper functions

This project significantly improved my ability to think about how standard library functions are built internally.

---

## 📦 Compilation

To compile the project:

```bash
make
