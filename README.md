# Monty - Stacks, Queues - LIFO, FIFO

> This ALX Software Engineering project is a custom ByteCode interpreter, coded in C.


## Built With

- C


## Getting Started

**The program reads from the file "byte_file.m" that contains one instruction per line. It then calls the right function to modify a stack according to the instruction. It prints custom error messages if the instruction is wrong.**

### Prerequiosite

Please use GCC 4.8.4 compiler or later.  



### Setup

To get a local copy up and running follow these simple example steps.

```  
$ git clone https://github.com/kingsleyocran/monty.git  
$ cd monty
```  

### Compilation

```$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty```

### Usage

```./monty byte_file.m```


## opcodes 

Listed below are the opcodes to can be used in monty:  
  
opcode | Function  
--------|---------------  
push | Pushes an element to the stack  
pall | Prints all the values on the stack, starting from the top of the stack  
pint| prints the value at the top of the stack, followed by a new line  
pop | Removes the top element of the stack  
swap | Swaps the top two elements of the stack  
add | Adds the top two elements of the stack  
nop | Doesn’t do anything 
sub | Subtracts the top element of the stack from the second top element of the stack. 
div | Divides the second top element of the stack by the top element of the stack. 
mul | Multiplies the second top element of the stack with the top element of the stack.
mod | Computes the rest of the division of the second top element of the stack by the top element of the stack.
pchar | Prints the char at the top of the stack, followed by a new line. 
pstr | Prints the string starting at the top of the stack, followed by a new line.

### Authors

👤 **Kingsley Ocran**

- GitHub: [@githubhandle](https://github.com/kingsleyocran)
- LinkedIn: [LinkedIn](https://www.linkedin.com/in/kingsley-ocran-9909a3186/)


## Show your support

Give a ⭐️ if you like this project!


## 📝 License

This project is [MIT](./MIT.md) licensed.