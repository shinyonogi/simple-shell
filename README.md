# Simple Shell in C
This project is designed for self-study and to enhance my proficiency in the C programming language.
I'm utilizing this README file to document everything I've learned throughout this project.
This encompasses
- ``C syntax``
- ``libraries``
- ``functions``
- ``and more.``

## Libraries

### 1. <stdio.h> - Standard Input and Output Library

- Description: This library provides functionalities for data input and output.
- Explanation: Most programs require a way to read.
- Important features: Input functions like scanf(), Output functions like prinf(), File operations like fopen(), etc.

### 2. <stdlib.h> - Standard Utility Library

- Description: This library provides general purpose functions, including dynamic memory management, random number generation and system calls.
- Explanation: It offers tools that are commonly needed in various applications, regardless of their specific tasks.
- Important Features: Memory allocation functions like malloc() & free(), system-realated functions like system() & exit(), conversion functions like atoi(). etc.

### 3. <string.h> - String Handling Library

- Description: This library provides functions for manipulating arrays of characters of strings.
- Explanation: String operations are common in programming, and this library helps in string manipulations.
- Important Features: String operations like strcpy(), string comparison functions like strcmp(), memory functions like memcpy(), etc.

### 4. <unistd.h> - POSIX Operating System API

- Description: This library provides access to the POSIX operating system API.
- Explanation: It's essential for many low-level system operations, often in Unix-based systems.
- Important Features: system calls like fork(), pipe(), sleep, File and Direcotry access functions, Process control functions, etc.

### 5. <sys/types.h> - Data Types

- Description: This header defines various data types used in system calls.
- Explanation: These types are typically used alongside other system libraries for more precise functionaliry and control.
- Important Features: Defines data types like pid_t, ssize_t, Provides type definitions that are used with system call functions.

### 6. <sys/wait.h> - Wait Functions

- Description: This header provides the means of process synchronization.
- Explanation: It's used with system calls that involve waiting for processes, lie when a parent process waits for a child process to finish.
- Important Features: Functions like wait(), waitpid(), Macros to analyze the status code like WIFEXITED(), WEXITSTATUS(), etc.

