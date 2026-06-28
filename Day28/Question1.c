// Write a program to create library management system
#include <stdio.h>
#include <string.h>
struct B{char t[40],a[40];int i;}b[100];int c=0;
void a(){
    printf("Title: "); scanf(" %[^\n]", b[c].t);
    printf("Author: "); scanf(" %[^\n]", b[c].a);
    printf("ID: "); scanf("%d", &b[c].i);
    c++;
}
void l(){
    for(int j=0;j<c;j++)
        printf("%d) %s by %s (ID:%d)\n", j+1, b[j].t, b[j].a, b[j].i);
}
void s(){
    int x, f=0;
    printf("Search ID: "); scanf("%d",&x);
    for(int j=0;j<c;j++)
      if(b[j].i==x){
         printf("Found: %s by %s\n", b[j].t, b[j].a);
         f=1;
         break;
      }
    if(!f) printf("Not found\n");
}
int main(){
    char o;
    while(1){
        printf("(A)dd book, (L)ist books, (S)earch by ID, (Q)uit: ");
        scanf(" %c", &o);
        if(o=='A'||o=='a') a();
        else if(o=='L'||o=='l') l();
        else if(o=='S'||o=='s') s();
        else if(o=='Q'||o=='q') break;
    }
    return 0;
}