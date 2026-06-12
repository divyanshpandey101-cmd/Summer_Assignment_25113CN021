// Write a program to write function for palindrome

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            if (tolower(str[start]) != tolower(str[end])) {
                return 0; 
            }
            start++;
            end--;
        }
    }
    return 1; 
}
int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;
    if (isPalindrome(input)) {
        printf("'%s' is a palindrome.\n", input);
    } else {
        printf("'%s' is not a palindrome.\n", input);
    }
    return 0;