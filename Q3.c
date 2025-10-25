#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    int A[3][3], B[3][3], C[3][3] = {0};

    printf("Enter rows and columns of Matrix A (max 3x3): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B (max 3x3): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication NOT possible (c1 must equal r2)\n");
        return 0;
    }

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    printf("\nMatrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) printf("%d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", B[i][j]);
        printf("\n");
    }

    printf("\nResult Matrix (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;  
}

