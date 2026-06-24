// Write a program to find longest word
#include <stdio.h>
#include <string.h>
int main() {
    char s[200], w[100], lw[100];
    int i = 0, j = 0, l = 0, ll = 0;
    fgets(s, sizeof(s), stdin);
    while (s[i]) {
        if (s[i] != ' ' && s[i] != '\n') {
            w[j++] = s[i];
        } else {
            if (j > ll) {
                w[j] = '\0';
                strcpy(lw, w);
                ll = j;
            }
            j = 0;
        }
        i++;
    }
    if (j > ll) {
        w[j] = '\0';
        strcpy(lw, w);
    }
    printf("%s\n", lw);
    return 0;
}