# 📚 ft_printf

A custom implementation of the `printf` function developed as part of the 42 curriculum.

## 📖 About

`ft_printf` is a core project of the 42 curriculum. The goal of this project is to recreate the behavior of the standard `printf` function, handling a set of mandatory conversions while learning more about variadic functions, formatting, and output handling in C.

## 🧩 What’s Included

This project supports the following conversions:

- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d` and `%i` — signed integers
- `%u` — unsigned integers
- `%x` and `%X` — hexadecimal numbers
- `%%` — percent sign

## 🗂️ Project Structure

```text
ft_printf/
├── Makefile
├── README.md
├── .gitignore
├── inc/
│   └── ft_printf.h
└── src/
    ├── ft_printf.c
    ├── ft_check_type.c
    ├── ft_putchar.c
    ├── ...
```

## 🚀 Usage

Clone the repository and move into the project folder:

```bash
git clone https://github.com/bde-luce/ft_printf.git
cd ft_printf
```

Compile the library:

```bash
make
```

After compilation, the project generates the `libftprintf.a` static library.

To use it in another project, include the header file:

```c
#include "ft_printf.h"
```

Then compile your program with the library:

```bash
cc main.c libftprintf.a -Iinc -o my_program
```

## ⚙️ Makefile Rules

The Makefile supports the following commands:

- `make` or `make all` — compiles the library

- `make clean` — removes object files

- `make fclean` — removes object files and the compiled library

- `make re` — rebuilds everything from scratch


## 📝 Notes

This project is part of the 42 School curriculum. The repository was later reorganized for clearer structure and presentation.