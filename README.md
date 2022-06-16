# Monty

> This ALX Software Engineering project is a custom ByteCode interpreter, coded in C.


## Built With

- C


## Getting Started

**The program reads from the file "byte_file.m" that contains one instruction per line. It then calls the right function to modify a stack according to the instruction. It prints custom error messages if the instruction is wrong.**

### Setup


To get a local copy up and running follow these simple example steps.

```git clone https://github.com/kingsleyocran/monty.git```

### Compilation


```gcc -Wall -Werror -Wextra -pedantic *.c -o monty```

### Usage


```./monty byte_file.m```

## Files and Description


File | Description
---- | -----------
[main.c](./main.c) | entry point of the program
[monty.h](./monty.h) | main header file
[lists.h](./lists.h) | header file for the lists functions
[get_func.c](./get_func.c) | function that picks the right function for the instruction
[handler_funcs1.c](./handler_funcs1.c) | handler functions for the instructions
[handler_funcs2.c](./handler_funcs2.c) | handler functions for the instructions
[handler_funcs3.c](./handler_funcs3.c) | handler functions for the instructions
[list_funcs1.c](./list_funcs1.c) | doubly linked list functions
[list_funcs2.c](./list_funcs2.c) | doubly linked list functions
[strtow.c](./strtow.c) | string tokenizing functions
[free.c](./free.c) | memory handling functions
[char.c](./char.c) | handler functions for ascii instructions
[bf](./bf) | Advanced tasks: Brainf*ck programs

## Authors

👤 **Kingsley Ocran**

- GitHub: [@githubhandle](https://github.com/kingsleyocran)
- LinkedIn: [LinkedIn](https://www.linkedin.com/in/kingsley-ocran-9909a3186/)


## Show your support

Give a ⭐️ if you like this project!


## 📝 License

This project is [MIT](./MIT.md) licensed.