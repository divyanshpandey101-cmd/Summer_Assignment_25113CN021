// Write a program to check symmetric matrix
#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }
    if(flag)
        printf("Symmetric\n");
    else
        printf("Not symmetric\n");
    return 0;
}