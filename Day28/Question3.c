// Write a program to create ticket booking system
#include <stdio.h>
struct T { int i; char n[40]; int s; } t[100]; int c = 0, tot = 50;
void b() {
    if (tot <= 0) {
        printf("No tickets available\n");
        return;
    }
    printf("Booking ID: "); scanf("%d", &t[c].i);
    printf("Name: "); scanf(" %[^\n]", t[c].n);
    printf("Number of tickets: "); scanf("%d", &t[c].s);
    if (t[c].s > tot) {
        printf("Only %d tickets available\n", tot);
        return;
    }
    tot -= t[c].s;
    printf("Booking successful. Tickets left: %d\n", tot);
    c++;
}
void l() {
    for (int j = 0; j < c; j++) {
        printf("%d) ID: %d, Name: %s, Tickets: %d\n", j + 1, t[j].i, t[j].n, t[j].s);
    }
    printf("Total tickets left: %d\n", tot);
}
void s() {
    int x, f = 0;
    printf("Search Booking ID: "); scanf("%d", &x);
    for (int j = 0; j < c; j++) {
        if (t[j].i == x) {
            printf("Found: %s, Tickets booked: %d\n", t[j].n, t[j].s);
            f = 1;
            break;
        }
    }
    if (!f) printf("Booking not found\n");
}
int main() {
    char o;
    while (1) {
        printf("(B)ook ticket, (L)ist bookings, (S)earch booking, (Q)uit: ");
        scanf(" %c", &o);
        if (o == 'B' || o == 'b') b();
        else if (o == 'L' || o == 'l') l();
        else if (o == 'S' || o == 's') s();
        else if (o == 'Q' || o == 'q') break;
    }
    return 0;
}