# Palindrome Checker in C

This project contains a C program that checks whether a given string is a palindrome.  
The program ignores spaces and tab characters when checking.

---

## Features

- Reads input string (up to 80 characters)
- Strips trailing newline (`\n`) from input
- Skips spaces and tabs when comparing characters
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

- `palindrome.c` – contains:
  - `palindrome()` function: core logic, compares characters while skipping spaces and tabs
  - `main()` function: handles input and prints result

---

## Technologies used

- Language: C
- IDE: CLion
- Compiler: GCC
- Concepts: strings, loops, character arrays, `fgets`, `strlen`

---

🛠️ Academic practice project – focusing on clean logic and manual string handling in C.
