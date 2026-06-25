// Write a program to merge two sorted arrays
#include <stdio.h>
int main() {
    int n, m, i = 0, j = 0, k = 0;
    scanf("%d%d", &n, &m);
    int a[n], b[m], c[n + m];
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    for (j = 0; j < m; j++) 
        scanf("%d", &b[j]);
    i = 0; j = 0; k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n) 
        c[k++] = a[i++];
    while (j < m) 
        c[k++] = b[j++];
    for (i = 0; i < n + m; i++)
        printf("%d ", c[i]);
    return 0;
}