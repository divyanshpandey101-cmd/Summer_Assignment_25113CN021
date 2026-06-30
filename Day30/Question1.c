// Write a program to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>
int main() {
    int n, i, j;
    char nm[50][30], id[50][15];
    int ag[50], m[50][5];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", nm[i]);
        printf("Enter ID of student %d: ", i + 1);
        scanf("%s", id[i]);
        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &ag[i]);
        printf("Enter 5 marks for student %d: ", i + 1);
        for(j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    printf("\nRecords:\n");
    for(i = 0; i < n; i++) {
        int sum = 0;
        for(j = 0; j < 5; j++) {
            sum += m[i][j];
        }
        printf("%s %s Age:%d Total:%d Avg:%d\n", nm[i], id[i], ag[i], sum, sum/5);
    }
    return 0;
}