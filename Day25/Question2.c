// Write a program to find common characters in strings
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    int f[256] = {0}, i;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    for (i = 0; a[i]; i++)
        f[(unsigned char)a[i]] = 1;
    for (i = 0; b[i]; i++) {
        if (f[(unsigned char)b[i]] == 1) {
            printf("%c ", b[i]);
            f[(unsigned char)b[i]] = 2;  
        }
    }
    return 0;
}