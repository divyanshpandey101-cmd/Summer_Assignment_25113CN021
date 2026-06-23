// Write a program to find the first non repeating character
#include <stdio.h>
int main() {
    char s[100], c;
    int f[256] = {0}, i, j;
    scanf("%s", s);
    for (i = 0; s[i]; i++) f[(unsigned char)s[i]]++;
    for (j = 0; s[j]; j++) {
        if (f[(unsigned char)s[j]] == 1) {
            c = s[j];
            break;
        }
    }
    if (c)
        printf("%c\n", c);
    else
        printf("No unique character\n");
    return 0;
}