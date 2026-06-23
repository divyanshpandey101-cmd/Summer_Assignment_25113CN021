// Write a program to find maximum occuring character
#include <stdio.h>
int main() {
    char s[100], c = 0;
    int f[256] = {0}, i, m = 0;
    scanf("%s", s);
    for (i = 0; s[i]; i++) f[(unsigned char)s[i]]++;
    for (i = 0; i < 256; i++) {
        if (f[i] > m) {
            m = f[i];
            c = (char)i;
        }
    }
    if (c)
        printf("%c\n", c);
    else
        printf("No characters\n");
    return 0;
}