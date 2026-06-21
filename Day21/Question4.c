// Write a program to convert lowercase into uppercase
#include <stdio.h>
int main() {
    char text[100];
    int i = 0;
    printf("Enter text: ");
    fgets(text, 100, stdin);

    while (text[i] != '\0' && text[i] != '\n') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        }
        i++;
    }
    printf("Uppercase: %s\n", text);
    return 0;
}