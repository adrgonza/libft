# libft

Welcome to libft! This project aims to create a library of fundamental C functions, inspired by the Standard C Library, to be used in future 42 projects. By implementing these functions from scratch, you'll gain a deeper understanding of how they work and become more proficient in C programming.

## Table of Contents

1. [Introduction](#introduction)
2. [Usage](#usage)
3. [Function Descriptions](#function-descriptions)
4. [Building](#building)
5. [Contributing](#contributing)
6. [Credits](#credits)

## Introduction

In this project, we've implemented a collection of essential functions such as string manipulation, memory allocation, and basic math operations. The purpose of this library is to provide these functionalities in a consistent and efficient manner. By using this library, you'll avoid the need to rewrite these common functions for every new project.

## Usage

To use this library in your projects, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/libft.git
    ```

2. Include the `libft.h` header file in your source code:

    ```c
    #include "libft.h"
    ```

3. Compile your program with the `libft.a` library:

    ```bash
    gcc -o your_program your_program.c -L. -lft
    ```

4. Run your program:

    ```bash
    ./your_program
    ```

## Function Descriptions

Below is a list of functions available in this library, along with their descriptions. For detailed information on each function, please refer to the corresponding source code file.

- `ft_strlen`: Calculate the length of a string.
- `ft_strcpy`: Copy a string.
- `ft_strcmp`: Compare two strings.
- `ft_strdup`: Duplicate a string.
- `ft_strcat`: Concatenate two strings.
- `ft_memset`: Fill memory with a constant byte.
- `ft_memcpy`: Copy memory area.
- `ft_memmove`: Move memory area.
- `ft_memcmp`: Compare memory areas.
- `ft_memchr`: Locate byte in memory.
- `ft_memccpy`: Copy memory area until a certain character is found.
- `ft_putchar`: Output a character to the standard output.
- `ft_putstr`: Output a string to the standard output.
- `ft_putendl`: Output a string to the standard output followed by a newline.
- `ft_putnbr`: Output an integer to the standard output.
- `ft_putchar_fd`: Output a character to a specified file descriptor.
- `ft_putstr_fd`: Output a string to a specified file descriptor.
- `ft_putendl_fd`: Output a string to a specified file descriptor followed by a newline.
- `ft_putnbr_fd`: Output an integer to a specified file descriptor.
- `ft_tolower`: Convert uppercase letter to lowercase.
- `ft_toupper`: Convert lowercase letter to uppercase.
- `ft_isalpha`: Check if character is alphabetic.
- `ft_isdigit`: Check if character is a digit.
- `ft_isalnum`: Check if character is alphanumeric.
- `ft_isascii`: Check if character is ASCII.
- `ft_isprint`: Check if character is printable.
- `ft_strchr`: Locate first occurrence of a character in a string.
- `ft_strrchr`: Locate last occurrence of a character in a string.
- `ft_strncmp`: Compare two strings up to a certain number of characters.
- `ft_strlcpy`: Copy a string up to a certain size.
- `ft_strlcat`: Concatenate two strings with a certain size limit.
- `ft_strnstr`: Locate a substring in a string, with a maximum length.

## Building

To build the library, simply run:

```bash
make
