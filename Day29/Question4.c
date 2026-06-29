// Write a program to create inventory management system
#include <stdio.h>
#include <string.h>
struct I {
    int id;
    char n[50];
    int q;
    double p;
};
int main() {
    struct I a[100];
    int c = 0, i, x, f, id;
    char o;
    do {
        printf("\nMenu:\n");
        printf("a. Add item\nd. Display items\nu. Update quantity\nr. Remove item\nq. Quit\n");
        printf("Option: ");
        scanf(" %c", &o);
        if (o == 'q') break;
        switch (o) {
            case 'a':
                if (c == 100) {
                    printf("Inventory full.\n");
                    break;
                }
                printf("Enter id, name, quantity, price: ");
                scanf("%d %s %d %lf", &id, a[c].n, &a[c].q, &a[c].p);
                a[c].id = id;
                c++;
                break;
            case 'd':
                if (c == 0) {
                    printf("No items.\n");
                    break;
                }
                printf("ID\tName\tQty\tPrice\n");
                for (i = 0; i < c; i++)
                    printf("%d\t%s\t%d\t%.2lf\n", a[i].id, a[i].n, a[i].q, a[i].p);
                break;
            case 'u':
                if (c == 0) {
                    printf("No items.\n");
                    break;
                }
                printf("Enter id to update: ");
                scanf("%d", &id);
                f = -1;
                for (i = 0; i < c; i++) {
                    if (a[i].id == id) {
                        f = i;
                        break;
                    }
                }
                if (f == -1) {
                    printf("Item not found.\n");
                    break;
                }
                printf("Enter new quantity: ");
                scanf("%d", &x);
                a[f].q = x;
                break;
            case 'r':
                if (c == 0) {
                    printf("No items.\n");
                    break;
                }
                printf("Enter id to remove: ");
                scanf("%d", &id);
                f = -1;
                for (i = 0; i < c; i++) {
                    if (a[i].id == id) {
                        f = i;
                        break;
                    }
                }
                if (f == -1) {
                    printf("Item not found.\n");
                    break;
                }
                for (i = f; i < c - 1; i++)
                    a[i] = a[i + 1];
                c--;
                break;

            default:
                printf("Invalid option.\n");
        }
    } while (1);
    return 0;
}