#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int s = i; s <= n; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int a = n; a >= 1; a--)
    {
        for (int s = a; s <= n; s++) {
            printf(" ");
        }
        for (int j = 1; j <= a; j++) {
            printf("* ");
        }
        printf("\n");
    }  
    return 0;
}