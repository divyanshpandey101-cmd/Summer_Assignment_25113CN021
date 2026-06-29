// Write a program to create menu-driven calculator
#include <stdio.h>
int main() {
    char o;
    double a, b, r;
    int c;
    do {
        printf("\nChoose operation:\n");
        printf("a. Add\ns. Subtract\nm. Multiply\nd. Divide\nq. Quit\n");
        printf("Option: ");
        scanf(" %c", &o);
        if (o == 'q') break;
        printf("Enter two numbers: ");
        scanf("%lf %lf", &a, &b);
        if (o == 'a') r = a + b;
        else if (o == 's') r = a - b;
        else if (o == 'm') r = a * b;
        else if (o == 'd') {
            if (b != 0) r = a / b;
            else {
                printf("Cannot divide by zero.\n");
                continue;
            }
        } else {
            printf("Invalid option.\n");
            continue;
        }
        printf("Result: %.2lf\n", r);
    } while (1);
    return 0;
}