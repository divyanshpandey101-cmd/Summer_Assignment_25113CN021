// Write a program to find pair with given sum
#include <stdio.h>
int main() {
    int n, i, j, t, a, b;
    scanf("%d", &n);
    int c[n];
    for(i = 0; i < n; i++)
        scanf("%d", &c[i]);
    scanf("%d", &t);
    a = -1;
    b = -1;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(c[i] + c[j] == t) {
                a = c[i];
                b = c[j];
                break;
            }
        }
        if(a != -1)
            break;
    }
    if(a != -1)
        printf("%d %d\n", a, b);
    else
        printf("No pair found\n");
    return 0;
}