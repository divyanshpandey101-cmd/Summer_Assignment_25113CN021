// Write a program to create ATM simulation
#include <stdio.h>
int main() {
    int b = 1000, w, c = 0;
    char p[10], pp[10] = "1234";
    printf("Enter PIN:\n");
    scanf("%s", p);
    if (strcmp(p, pp) == 0) {
        do {
            printf("1: Balance\n2: Withdraw\n3: Deposit\n4: Exit\nChoose:\n");
            scanf("%d", &c);
            if (c == 1)
                printf("Balance: %d\n", b);
            else if (c == 2) {
                printf("Withdraw amount:\n");
                scanf("%d", &w);
                if (w <= b) {
                    b -= w;
                    printf("Withdrawn: %d\n", w);
                } else
                    printf("Insufficient balance\n");
            } else if (c == 3) {
                printf("Deposit amount:\n");
                scanf("%d", &w);
                b += w;
                printf("Deposited: %d\n", w);
            }
        } while (c != 4);
        printf("Exit\n");
    } else
        printf("Invalid PIN\n");
    return 0;
}