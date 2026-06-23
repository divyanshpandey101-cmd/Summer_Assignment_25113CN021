// Write a program to check anagram string
#include <stdio.h>
int main() {
    char a[100], b[100];
    int f[256] = {0}, i;
    scanf("%s %s", a, b);
    for (i = 0; a[i]; i++) f[(unsigned char)a[i]]++;
    for (i = 0; b[i]; i++) f[(unsigned char)b[i]]--;
    for (i = 0; i < 256; i++) {
        if (f[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}