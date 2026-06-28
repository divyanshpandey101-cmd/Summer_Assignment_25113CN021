// Write a program to create contact management system
#include <stdio.h>
#include <string.h>
struct C { char n[40]; char p[15]; } c[100]; int t = 0;
void a() {
    printf("Name: "); scanf(" %[^\n]", c[t].n);
    printf("Phone: "); scanf(" %[^\n]", c[t].p);
    t++;
}
void l() {
    for (int i = 0; i < t; i++)
        printf("%d) %s - %s\n", i + 1, c[i].n, c[i].p);
}
void s() {
    char x[40]; int f = 0;
    printf("Search name: "); scanf(" %[^\n]", x);
    for (int i = 0; i < t; i++) {
        if (strcmp(c[i].n, x) == 0) {
            printf("Found: %s - %s\n", c[i].n, c[i].p);
            f = 1;
            break;
        }
    }
    if (!f) printf("Contact not found\n");
}
int main() {
    char o;
    while (1) {
        printf("(A)dd contact, (L)ist contacts, (S)earch contact, (Q)uit: ");
        scanf(" %c", &o);
        if (o == 'A' || o == 'a') a();
        else if (o == 'L' || o == 'l') l();
        else if (o == 'S' || o == 's') s();
        else if (o == 'Q' || o == 'q') break;
    }
    return 0;
}