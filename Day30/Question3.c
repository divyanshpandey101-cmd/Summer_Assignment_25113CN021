// Write a program to create mini employee management system
#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char nm[50][30], id[50][15], dp[50][20];
    int ag[50];
    float sl[50];
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", nm[i]);
        printf("Enter ID of employee %d: ", i + 1);
        scanf("%s", id[i]);
        printf("Enter age of employee %d: ", i + 1);
        scanf("%d", &ag[i]);
        printf("Enter department of employee %d: ", i + 1);
        scanf("%s", dp[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &sl[i]);
    }
    printf("\nEmployee Records:\n");
    for(i = 0; i < n; i++) {
        printf("%s %s Age:%d Dept:%s Salary:%.2f\n", nm[i], id[i], ag[i], dp[i], sl[i]);
    }
    return 0;
}