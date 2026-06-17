// Write a program to intersection of arrays
#include <stdio.h>
int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int b[4] = {2, 3, 6, 9};
    int c[4], i = 0, j = 0, k = 0;
    while (i < 5 && j < 4) {
        if (a[i] < b[j]) i++;
        else if (b[j] < a[i]) j++;
        else {
            c[k++] = a[i];
            i++;
            j++;
        }
    }
    for (i = 0; i < k; i++) printf("%d ", c[i]);
    return 0;
}