// Write a program to find maximum frequency element
#include <stdio.h>
int main() {
    int n, i, j, m = 0, c, r;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        c = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j])
                c++;
        }
        if(c > m) {
            m = c;
            r = a[i];
        }
    }
    printf("%d\n", r);
    return 0;
}