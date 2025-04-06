#include <stdio.h>
#include <string.h>
#define MAX_STRING 81
/*
 * This program checks if a given string is a palindrome, ignoring spaces and tabs.
 *
 * Input: A string (up to 80 characters).
 * Output: Whether the string is a palindrome or not.
 */

/*
 * Checks if a given string is a palindrome.
 * Skips spaces and tab characters.
 * Get a string - the input string to check.
 * return 1 if palindrome, 0 otherwise.
 */
int palindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j) {
        while (str[i] == '\t' || str[i] == ' ')
            i++;
        while (str[j] == '\t' || str[j] == ' ')
            j--;
        if (str[i] != str[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main(void) {
    char str[MAX_STRING];
    int i;
    printf("Please enter a string\n");
    /*Getting the string from the user*/
    fgets(str, MAX_STRING, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    printf("Your string is: \"%s\"\n", str);
    /*Checking if the string is a palindrome and print the result*/
    if (palindrome(str)) {
        printf("Your string is a palindrome\n");
    } else {
        printf("Your string is not a palindrome\n");
    }
    return 0;
}
