// Write a program to find missing number in array
#include <stdio.h>
int main() {
    int n, i, s = 0, a = 0;
    scanf("%d", &n);
    int b[n-1];
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &b[i]);
        a += b[i];
    }
    s = n * (n + 1) / 2;
    printf("%d\n", s - a);
    return 0;
}