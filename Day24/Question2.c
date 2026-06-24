// Write a program to compress a string
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[200];
    int i = 0, j = 0, n, c;
    scanf("%s", a);
    n = strlen(a);
    while (i < n) {
        b[j++] = a[i];
        c = 1;
        while (i + 1 < n && a[i] == a[i + 1]) {
            c++;
            i++;
        }
        if (c > 1) {
            j += sprintf(&b[j], "%d", c);
        }
        i++;
    }
    b[j] = '\0';
    printf("%s\n", b);
    return 0;
}