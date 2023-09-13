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

## C things...

### Strings and array of Char
- In the first line of the main function, I'm declaring: char input[512];
- Explanation: In C, there isn't a native 'String' data types as seen in some other languages. Instead, strings are represented using arrays of characters. To denote the end of string, C uses a null character ``'\0'``. Since C doesn't natively support dynamic arrays, when you declare a charcter array for a string, you must specify its size in advance to allocate the required memory. This size should be large enough to accomodate the content of the string and the terminating null character.

### Pointers
- In the second line of the main function, I'm delcaring: char *args[10].
- In C, one of the fundamental concepts is that of the pointer. While pointers exist in other programming languages, they are often abstracted away for simplicity and security reasons. As its core, a pointer in C holds the memory addrss of another variable. For instance, if you declare an integer variable, you can also have pointer that stores the address of where this integer is located in memory. In contemporary operating systems like UNIX, the address is usually a virtual memory address.When it comes to strings in C, which are essentially arrays of characters, the name of the array represents the addrss of its first element. For instance, if you declare a character array (often used as a string) name 'input' like so: 'char input[512]', the name 'input' by itself represents the address of the first character in the array. To retireve the value stored at that address, you can either use the deference operator on the pointer, like '*input', or access the first element of the array directly with 'input[0]'. Admittedly, the syntax related to pointer can be a bit perplexing initially, but with practice, it should become more intuitive. Anw: With char *args[10], I'm declaring an array of pointers (size 10) that points on a string.

### fgets() function

- fgets() is a function in C that is used to read a string from an input stream, typically from standard input or from a file. It is defined as following: ``char *fgets(char *str, int n, FILE *stream);``
- Arguments: 1. str: A pointer to an array where the input string will be stored, 2. n: The maxium number of characters to be read (including the null character). Typically, this is the size of the array 'str', 3. stream: A pointer to the file or input stream from which to read. This could be a file pointer returned by functions like 'fopen()', or standard streams like 'stdin' (in my case).

### strlen() function

- strlen() is a function provided by the string.h library in C, designed to facilitate operations on strings. Its primary purpose is to computhe the length of a string by counting the number of characters until it reaches the terminating null character '\0'. It is defined as following: size_t strlen(const char *str).
- Arguments: 1. str: A Pointer to the null-terminated string whose length you wish to determine.
- Return Value: The function returns the length of the string, which is of type 'size_t'. size_t is an unsigned integer data type used to represent the size of objects in bytes. It ensures that you can safely store the size of any object the system can manage. The type 'size't is defined in the stddef.h header of the standard c library.


