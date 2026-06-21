// Write a program to find string length without strlen()
#include <stdio.h>
int main() {
    char text[100];
    int count = 0;
    printf("Enter text: ");
    fgets(text, 100, stdin);
    while (text[count] != '\0' && text[count] != '\n') {
        count++;
    }
    printf("Length: %d\n", count);
    return 0;
}