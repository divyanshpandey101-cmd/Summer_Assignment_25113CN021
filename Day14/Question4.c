// Write a program to Find duplicates in array
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n], foundDuplicate = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
                break;
            }
        }
    }
    if (!foundDuplicate)
        printf("No duplicates\n");
    return 0;
}