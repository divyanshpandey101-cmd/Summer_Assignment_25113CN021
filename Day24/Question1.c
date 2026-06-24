// Write a program to check string rotation
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100], c[200];
    int i, j, n, m;
    scanf("%s%s", a, b);
    n = strlen(a);
    m = strlen(b);
    if (n != m) {
        printf("No\n");
        return 0;
    }
    for (i = 0; i < n; i++)
        c[i] = a[i];
    for (j = 0; j < n; j++)
        c[i + j] = a[j];
    c[i + j] = '\0';
    for (i = 0; i <= 2 * n - m; i++) {
        for (j = 0; j < m; j++)
            if (c[i + j] != b[j])
                break;
        if (j == m) {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}