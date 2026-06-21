// Write a program to count vowels and consonants
#include <stdio.h>
int main() {
    char text[100];
    int i = 0, vow = 0, con = 0;
    printf("Enter text: ");
    fgets(text, 100, stdin);
    while (text[i] != '\0' && text[i] != '\n') {
        char c = text[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vow++;
            } else {
                con++;
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vow, con);
    return 0;
}