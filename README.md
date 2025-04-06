# Palindrome Checker in C

This project contains a C program that checks whether a given string is a palindrome.  
The program ignores spaces and tab characters when comparing characters.

---

## Features

- Reads input string (up to 80 characters)
- Removes trailing newline character
- Skips spaces and tabs while comparing
- Prints whether the string is a palindrome or not

---

## Example:
Please enter a string
race car
Your string is a palindrome

yaml
Copy
Edit

---

## Code structure

- `palindrome.c` contains:
  - `palindrome()` function: compares characters from both ends, skipping whitespace
  - `main()` function: handles input, output, and formatting

---

## Technologies used

- Language: C
- IDE: CLion
- Compiler: GCC
- Concepts: strings, character arrays, `fgets`, `strlen`, manual loop-based comparison

---

## Notes

- Built as part of academic practice
- Focuses on clean logic without external libraries
- Used to strengthen understanding of low-level string handling

---

*This project is part of my hands-on journey in C and system-level development.*
