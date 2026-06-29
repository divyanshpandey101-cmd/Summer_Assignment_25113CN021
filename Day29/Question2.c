// Write a program to create menu-driven array operations system
#include <stdio.h>
int main() {
    int a[100], n = 0, i, x, p, f;
    char o;
    do {
        printf("\nMenu:\n");
        printf("i. Insert\nd. Delete\ns. Search\ndp. Display\nq. Quit\n");
        printf("Option: ");
        scanf(" %c", &o);
        if (o == 'q') break;
        switch (o) {
            case 'i':
                if (n == 100) {
                    printf("Array full.\n");
                    break;
                }
                printf("Enter value to insert: ");
                scanf("%d", &x);
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &p);
                if (p < 0 || p > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = n; i > p; i--)
                    a[i] = a[i - 1];
                a[p] = x;
                n++;
                break;
            case 'd':
                if (n == 0) {
                    printf("Array empty.\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &p);
                if (p < 0 || p >= n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = p; i < n - 1; i++)
                    a[i] = a[i + 1];
                n--;
                break;
            case 's':
                if (n == 0) {
                    printf("Array empty.\n");
                    break;
                }
                printf("Enter value to search: ");
                scanf("%d", &x);
                f = -1;
                for (i = 0; i < n; i++) {
                    if (a[i] == x) {
                        f = i;
                        break;
                    }
                }
                if (f == -1)
                    printf("Not found.\n");
                else
                    printf("Found at position %d.\n", f);
                break;
            case 'd':
                if (n == 0) {
                    printf("Array empty.\n");
                    break;
                }
                printf("Array elements: ");
                for (i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    } while (1);
    return 0;
}