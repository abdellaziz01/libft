*This project has been created as part of the 42 curriculum by <abdait-o>.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.
The goal of this project is to recreate several standard C library functions and implement additional utility functions in C.

This project helps improve understanding of pointers, memory management,
strings, and linked lists.

## Instructions

### Compilation

To compile the library, run the following command from the root directory of the repository:
```bash
make
```
This generates the static library libft.a.

### Available Makefile Rules

make: Compiles the library.
make clean: Removes object files.
make fclean: Removes object files and the compiled library.
make re: Removes previously compiled files and recompiles the library.

### Using the Library

To use Libft in a C project, include the header file in your source code:
```c
#include "libft.h"
```
Compile your program together with the library:
```bash
cc main.c libft.a -o program
```
Then execute it:
```bash
./program
```
Replace main.c with your own source file or files.

## Library Contents
Libft is a C library that reimplements standard C library functions and provides additional utilities for string manipulation, memory management, character handling, and linked lists.

### 1.Character Classification and Conversion

Functions used to check or convert individual characters.

ft_isalpha: Checks whether a character is an alphabetic letter.
ft_isdigit: Checks whether a character is a digit.
ft_isalnum: Checks whether a character is alphanumeric.
ft_isascii: Checks whether a character belongs to the ASCII character set.
ft_isprint: Checks whether a character is printable.
ft_toupper: Converts a lowercase letter to uppercase.
ft_tolower: Converts an uppercase letter to lowercase.

### 2.String Functions

Functions for manipulating and inspecting strings.

ft_strlen: Calculates the length of a string.
ft_strlcpy: Copies a string into a destination buffer with a size limit.
ft_strlcat: Concatenates strings with a size limit.
ft_strchr: Searches for a character in a string.
ft_strrchr: Searches for the last occurrence of a character.
ft_strncmp: Compares two strings up to a specified number of characters.
ft_strnstr: Searches for a substring within a string, up to a specified length.
ft_strdup: Creates a dynamically allocated duplicate of a string.

### 3.Memory Functions

Functions for handling memory blocks.

ft_memset: Fills a memory block with a specified byte.
ft_bzero: Sets a memory block to zero.
ft_memcpy: Copies memory between non-overlapping memory regions.
ft_memmove: Copies memory safely when source and destination regions overlap.
ft_memchr: Searches for a byte in a memory block.
ft_memcmp: Compares two memory blocks.
ft_calloc: Allocates memory and initializes it to zero.

### 4.Conversion and Output Functions

Functions for converting strings to integers and writing data to file descriptors.

ft_atoi: Converts a string to an integer.
ft_itoa: Converts an integer into a string.
ft_putchar_fd: Writes a character to a file descriptor.
ft_putstr_fd: Writes a string to a file descriptor.
ft_putendl_fd: Writes a string followed by a newline.
ft_putnbr_fd: Writes an integer to a file descriptor.

### 5.Additional String Manipulation Functions

ft_substr: Extracts a substring from a string.
ft_strjoin: Concatenates two strings into a newly allocated string.
ft_strtrim: Removes specified characters from the beginning and end of a string.
ft_split: Splits a string into an array of strings using a delimiter.
ft_strmapi: Applies a function to each character of a string.
ft_striteri: Applies a function to each character of a string by reference.

### 6.Linked List Functions

The linked list part of Libft provides utilities for creating and manipulating singly linked lists using the t_list structure. These functions are included only if the bonus part has been implemented.

ft_lstnew: Creates a new list element.
ft_lstadd_front: Adds an element to the beginning of a list.
ft_lstsize: Counts the elements in a list.
ft_lstlast: Returns the last element of a list.
ft_lstadd_back: Adds an element to the end of a list.
ft_lstdelone: Deletes one list element using a deletion function.
ft_lstclear: Deletes and frees an entire list.
ft_lstiter: Applies a function to each list element.
ft_lstmap: Creates a new list by applying a function to each element.

## Technical Choices

Language: C
Compilation: cc with the flags required by the project, typically -Wall -Wextra -Werror
Library format: Static library (libft.a)
Build system: Makefile
Header file: libft.h

## Resources

### References

The following resources were used to study C programming and understand the standard library functions reimplemented in this project:
- Linux man-pages (`man 3 strlen`, `man 3 memcpy`, etc.)
- The 42 Libft project subject
- Neso Academy: <https://www.youtube.com/@nesoacademy>

###  AI Usage

When I encounter a problem in C or need to understand a new concept, I first ask my peers for help and try to develop a general understanding of the problem myself. After that, I may look for information online or use AI tools to get some guidance and explore possible solutions.

I do not rely entirely on AI, as understanding the code and solving problems independently are important parts of my learning process. After completing my code, and once I have already sought help from my peers, I may also use AI to review it, identify potential errors, and check whether anything could be improved. My main goal is to learn, understand my mistakes, and improve my programming skills rather than simply rely on AI-generated solutions.