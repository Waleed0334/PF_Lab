#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter rows: ");
    scanf("%d", &n);  
    for (i = n; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (j = n; j > i; j--)
            printf(" ");
        for (k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
