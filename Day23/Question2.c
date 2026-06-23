// Write a program to find the first repeating character
#include <stdio.h>
int main() {
    char s[100], c = 0;
    int f[256] = {0}, i;
    scanf("%s", s);
    for (i = 0; s[i]; i++) {
        if (f[(unsigned char)s[i]] == 1) {
            c = s[i];
            break;
        }
        f[(unsigned char)s[i]]++;
    }
    if (c)
        printf("%c\n", c);
    else
        printf("No repeating character\n");
    return 0;
}