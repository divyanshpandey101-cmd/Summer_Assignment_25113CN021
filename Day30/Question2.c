// Write a program to create mini library system
#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char t[50][50], a[50][30], id[50][15];
    int y[50], st[50];
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", t[i]);
        printf("Enter author of book %d: ", i + 1);
        scanf(" %[^\n]", a[i]);
        printf("Enter ID of book %d: ", i + 1);
        scanf("%s", id[i]);
        printf("Enter year of publication for book %d: ", i + 1);
        scanf("%d", &y[i]);
        st[i] = 1;
    }
    printf("\nLibrary records:\n");
    for(i = 0; i < n; i++) {
        printf("%s by %s, ID: %s, Year: %d, Status: %s\n",
            t[i], a[i], id[i], y[i], st[i] ? "Available" : "Issued");
    }
    return 0;
}