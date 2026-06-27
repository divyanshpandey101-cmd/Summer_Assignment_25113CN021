// Write a program to create student record management system
#include <stdio.h>
#include <string.h>
struct S {
    int i;
    char n[30];
    float g;
};
void a(struct S x[], int *c) {
    printf("Enter ID: ");
    scanf("%d", &x[*c].i);
    printf("Enter Name: ");
    scanf(" %[^\n]", x[*c].n);
    printf("Enter Grade: ");
    scanf("%f", &x[*c].g);
    (*c)++;
}
void l(struct S x[], int c) {
    for (int j = 0; j < c; j++) {
        printf("ID: %d, Name: %s, Grade: %.2f\n", x[j].i, x[j].n, x[j].g);
    }
}
void u(struct S x[], int c, int id) {
    for (int j = 0; j < c; j++) {
        if (x[j].i == id) {
            printf("Update Name: ");
            scanf(" %[^\n]", x[j].n);
            printf("Update Grade: ");
            scanf("%f", &x[j].g);
            printf("Record updated.\n");
            return;
        }
    }
    printf("Student not found\n");
}
void d(struct S x[], int *c, int id) {
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
    printf("Student not found\n");
}
int main() {
    struct S a[100];
    int c = 0, o, id;
    while (1) {
        printf("1:Add 2:List 3:Update 4:Delete 5:Exit\nChoose: ");
        scanf("%d", &o);
        if (o == 1) a(a, &c);
        else if (o == 2) l(a, c);
        else if (o == 3) {
            printf("Enter ID to update: ");
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