#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int isZero = 1, isIdentity = 1, isDiagonal = 1;
    int transpose[3][3];
    int det;

    printf("Enter 3x3 matrix values:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(a[i][j] != 0) isZero = 0;
            if(i == j && a[i][j] != 1) isIdentity = 0;
            if(i != j && a[i][j] != 0) isIdentity = 0;

            if(i != j && a[i][j] != 0) isDiagonal = 0;
        }
    }

    printf("\n--- MATRIX TYPE CHECK ---\n");
    printf("Square Matrix: YES (3x3)\n");
    if(isZero) printf("Zero Matrix: YES\n"); else printf("Zero Matrix: NO\n");
    if(isIdentity) printf("Identity Matrix: YES\n"); else printf("Identity Matrix: NO\n");
    if(isDiagonal) printf("Diagonal Matrix: YES\n"); else printf("Diagonal Matrix: NO\n");

    printf("\n--- TRANSPOSE ---\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }

    det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
        - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
        + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    printf("\nDeterminant = %d\n", det);

    if(det == 0) {
        printf("\nMatrix has NO inverse (Determinant is 0)\n");
    } else {
        printf("\nInverse exists (calculating...)\n");
        printf("BUT you didn't ask for actual inverse calculation steps with fractions.\n");
    }

    return 0;
}
