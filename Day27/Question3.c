// Write a program to create salary management system
#include <stdio.h>
#include <string.h>
struct E {
    int i;
    char n[30];
    float s;
};
void a(struct E x[], int *c) {
    printf("Enter ID: ");
    scanf("%d", &x[*c].i);
    printf("Enter Name: ");
    scanf(" %[^\n]", x[*c].n);
    printf("Enter Salary: ");
    scanf("%f", &x[*c].s);
    (*c)++;
}
void l(struct E x[], int c) {
    for (int j = 0; j < c; j++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", x[j].i, x[j].n, x[j].s);
    }
}
void u(struct E x[], int c, int id) {
    for (int j = 0; j < c; j++) {
        if (x[j].i == id) {
            printf("Update Salary: ");
            scanf("%f", &x[j].s);
            printf("Salary updated.\n");
            return;
        }
    }
    printf("Employee not found\n");
}
void d(struct E x[], int *c, int id) {
    for (int j = 0; j < *c; j++) {
        if (x[j].i == id) {
            for (int k = j; k < *c - 1; k++) {
                x[k] = x[k + 1];
            }
            (*c)--;
            printf("Record deleted.\n");
            return;
        }
    }
    printf("Employee not found\n");
}
int main() {
    struct E a[100];
    int c = 0, o, id;
    while (1) {
        printf("1:Add 2:List 3:Update Salary 4:Delete 5:Exit\nChoose: ");
        scanf("%d", &o);
        if (o == 1) a(a, &c);
        else if (o == 2) l(a, c);
        else if (o == 3) {
            printf("Enter ID to update salary: ");
            scanf("%d", &id);
            u(a, c, id);
        }
        else if (o == 4) {
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            d(a, &c, id);
        }
        else break;
    }
    return 0;
}