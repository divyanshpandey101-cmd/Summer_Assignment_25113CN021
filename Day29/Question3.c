// Write a program to create menu-driven string operations system
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100], o;
    int l;
    do {
        printf("\nMenu:\n");
        printf("i. Input strings\nl. Length of string a\nc. Concatenate b to a\np. Compare a and b\nx. Copy b to a\nq. Quit\n");
        printf("Option: ");
        scanf(" %c", &o);
        if (o == 'q') break;
        switch (o) {
            case 'i':
                printf("Enter string a: ");
                scanf(" %[^\n]", a);
                printf("Enter string b: ");
                scanf(" %[^\n]", b);
                break;
            case 'l':
                l = strlen(a);
                printf("Length of a: %d\n", l);
                break;
            case 'c':
                strcat(a, b);
                printf("After concatenation, a: %s\n", a);
                break;
            case 'p':
                l = strcmp(a, b);
                if (l == 0)
                    printf("Strings are equal.\n");
                else if (l < 0)
                    printf("a is less than b.\n");
                else
                    printf("a is greater than b.\n");
                break;
            case 'x':
                strcpy(a, b);
                printf("After copy, a: %s\n", a);
                break;

            default:
                printf("Invalid option.\n");
        }
    } while (1);
    return 0;
}