// Write a program to create bank account system
#include <stdio.h>
struct A{int n;double b;}a[100];int c=0;
void d(){
    printf("Account number: "); scanf("%d",&a[c].n);
    printf("Initial balance: "); scanf("%lf",&a[c].b);
    c++;
}
void l(){
    for(int i=0;i<c;i++)
        printf("%d) Acc# %d Balance: %.2lf\n", i+1, a[i].n, a[i].b);
}
void w(){
    int x,f=0; double m;
    printf("Account number to withdraw from: "); scanf("%d",&x);
    for(int i=0;i<c;i++){
        if(a[i].n==x){
            printf("Amount to withdraw: "); scanf("%lf",&m);
            if(m<=a[i].b){
                a[i].b-=m;
                printf("Withdrawal successful. New balance: %.2lf\n", a[i].b);
            } else printf("Insufficient funds\n");
            f=1; break;
        }
    }
    if(!f) printf("Account not found\n");
}
void dep(){
    int x,f=0; double m;
    printf("Account number to deposit to: "); scanf("%d",&x);
    for(int i=0;i<c;i++){
        if(a[i].n==x){
            printf("Amount to deposit: "); scanf("%lf",&m);
            a[i].b+=m;
            printf("Deposit successful. New balance: %.2lf\n", a[i].b);
            f=1; break;
        }
    }
    if(!f) printf("Account not found\n");
}
int main(){
    char o;
    while(1){
        printf("(D)eposit, (W)ithdraw, (A)dd account, (L)ist accounts, (Q)uit: ");
        scanf(" %c",&o);
        if(o=='A'||o=='a') d();
        else if(o=='L'||o=='l') l();
        else if(o=='W'||o=='w') w();
        else if(o=='D'||o=='d') dep();
        else if(o=='Q'||o=='q') break;
    }
    return 0;
}