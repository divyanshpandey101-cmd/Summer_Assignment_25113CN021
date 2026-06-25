// Write a program to sort words by length
#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char t[50], a[100][50];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s", a[i]);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(a[i]) > strlen(a[j])) {
                strcpy(t, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t);
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]);
    return 0;
}