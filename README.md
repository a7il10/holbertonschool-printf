# Custom Printf Function in C _printf

## Introduction

This project involves creating a custom implementation of the *_printf* function that generates formatted output based on a given format string. The function is designed to mimic the behavior of the standard C library function printf. The _printf function is responsible for writing the formatted output to the standard output stream, also known as *stdout*.
The goal of this project is to create a flexible and efficient implementation of _printf that can handle various input formats and produce the expected output.

## Functions Overview
1. ```_printf ```:

- The main function that mimics printf.
- Takes a format string and variable arguments.
- Processes the format string and calls the appropriate printing functions.
2. ``` print_c ```:

- Prints a single character.
- Takes a va_list argument.
- Returns the number of characters printed (always 1).
3. ``` print_s ```:

- Prints a string.
- Takes a va_list argument.
- Returns the length of the string.
4. ``` print_i ``` and ``` print_d ```:

- Print integers (positive or negative).
- Handle formatting and sign handling.
- Return the number of digits printed.
5. ``` check_formats ```:

- Checks for valid format specifiers.
- Maps format specifiers to their corresponding printing functions.
## How They Work
The ``` _printf ``` function:

- Parses the format string character by character.
- When encountering %, it identifies the format specifier.
- Calls the appropriate printing function based on the specifier.
2. The printing functions (``` print_c ```, ``` print_s ```, ``` print_i ```, ``` print_d ```):

- Extract the corresponding argument from the va_list.
- Format and print the value.
- Return the count of characters printed.

## Function Prototype
The prototype for the custom _printf function is as follows:
```c
int _printf(const char *format, ...);
```

## Return value
The _printf function returns an integer, representing the total number of characters printed (excluding the null byte used to terminate strings).

## Supported Conversion Specifiers

 The format string provided to the function contains zero or more directives, each corresponding to a specific conversion specifier. The supported conversion specifiers in this project are:

* **%c**: *Character* - Output a single character.
* **%s**: *String* - Output a null-terminated string.
* **%%**: *Percent* sign - Output a literal '%' character.
* **%d** and **%i**: *Integer* - Outputs a signed decimal integer.

For each conversion specifier encountered in the format string, the _printf function processes the input arguments accordingly and writes the formatted result to stdout. 

## Requirements
No standard library

## How to use
1. Compile the source code
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
2. Include the custom main.h header file in your C source files:
```c
#include "main.h"
```
3. Use the _printf function in your code, just like the standard printf.
```c
int main() {
    _printf("Hello, %s! The answer is %d.\n", "user", 42);
    return 0;
}
```
## Examples
Here is an example usage:
#### Include the custom main.h header file in your C source files:
```c
#include "main.h"
```
#### To test the code, you can use your own main.c or the example below

```c
int main() {
    _printf("Hello, %s! The answer is %d.\n", "user", 42);
    return 0;
}
```
Output:
```
Hello, user! The answer is 42.
```
## What happens when
When ``` _printf("hello %s\n", "world", 1, 2, 3, 4); ``` 
is called, the function has no way to know that more arguments were passed, so it will just ignore them. The function will not fail. The user is responsible for calling the function the right way.




## Authors

- [@Mateo Drenova](https://www.github.com/MDrenova)
- [@Atilio Sulvari](https://www.github.com/a7il10/)
```

