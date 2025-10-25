#include <stdio.h>
int main() {
    float a[3][3], t[3][3], co[3][3], adj[3][3], inv[3][3];
    float det = 0;
    int i, j, p, q, r, s;

    printf("Enter 3x3 matrix elements:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%f", &a[i][j]);
        }
        printf("\n");
    }  

    printf("\nOriginal Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%.2f ", a[i][j]);
        printf("\n");
    }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            t[j][i] = a[i][j];

    printf("\nTranspose:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%.2f ", t[i][j]);
        printf("\n");
    }

    for(i=0; i<3; i++) {
        float m[2][2];
        for(j=1, r=0; j<3; j++, r++)
            for(p=0, s=0; p<3; p++)
                if(p != i)
                    m[r][s++] = a[j][p];

        float d2 = m[0][0]*m[1][1] - m[0][1]*m[1][0];
        det += (i%2==0 ? 1 : -1) * a[0][i] * d2;
    }
    printf("\nDeterminant = %.2f\n", det);

    if(det == 0) {
        printf("\nInverse does not exist (Determinant = 0)\n");
        return 0;
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            float m[2][2];
            for(p=0, r=0; p<3; p++) {
                if(p != i) {
                    for(q=0, s=0; q<3; q++)
                        if(q != j)
                            m[r][s++] = a[p][q];
                    r++;
                }
            }
            co[i][j] = ((i+j)%2==0 ? 1 : -1) * (m[0][0]*m[1][1] - m[0][1]*m[1][0]);
        }
    }

    printf("\nCofactor Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%.2f ", co[i][j]);
        printf("\n");
    }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            adj[j][i] = co[i][j];

    printf("\nAdjoint Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%.2f ", adj[i][j]);
        printf("\n");
    }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            inv[i][j] = adj[i][j] / det;

    printf("\nInverse Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%.2f ", inv[i][j]);
        printf("\n");
    }

    return 0;
}
