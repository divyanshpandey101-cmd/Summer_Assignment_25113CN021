// Write a program to create marksheet generation system
#include <stdio.h>
struct S {
    int i;
    char n[30];
    int m1, m2, m3;
    int t;
    float a;
};
void a(struct S x[], int *c) {
    printf("Enter ID: ");
    scanf("%d", &x[*c].i);
    printf("Enter Name: ");
    scanf(" %[^\n]", x[*c].n);
    printf("Enter Marks for 3 subjects: ");
    scanf("%d %d %d", &x[*c].m1, &x[*c].m2, &x[*c].m3);
    x[*c].t = x[*c].m1 + x[*c].m2 + x[*c].m3;
    x[*c].a = x[*c].t / 3.0;
    (*c)++;
}
void l(struct S x[], int c) {
    printf("ID  Name           M1  M2  M3  Total  Average\n");
    for (int j = 0; j < c; j++) {
        printf("%-3d %-14s %-3d %-3d %-3d %-6d %.2f\n", x[j].i, x[j].n, x[j].m1, x[j].m2, x[j].m3, x[j].t, x[j].a);
    }
}
int main() {
    struct S a[100];
    int c = 0, o;
    while (1) {
        printf("1:Add 2:Mark Sheet 3:Exit\nChoose: ");
        scanf("%d", &o);

        if (o == 1) a(a, &c);
        else if (o == 2) l(a, c);
        else break;
    }
    return 0;
}