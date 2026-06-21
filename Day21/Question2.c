// Write a program to reverse a string
#include <stdio.h>
int main() {
    char text[100], rev[100];
    int i = 0, j;
    printf("Enter text: ");
    fgets(text, 100, stdin);
    while (text[i] != '\0' && text[i] != '\n') {
        i++;
    }
    i--;
    for (j = 0; i >= 0; i--, j++) {
        rev[j] = text[i];
    }
    rev[j] = '\0';
    printf("Reversed: %s\n", rev);
    return 0;
}