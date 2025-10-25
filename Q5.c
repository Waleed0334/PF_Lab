#include <stdio.h>

int main() {
    int arr[3][3][3], same, layerA, layerB;

    printf("Enter 27 elements for 3×3×3 array (layer-wise):\n");
    for (int i = 0; i < 3; i++) {
        printf("\n--- Layer %d ---\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Enter 3 elements for row %d: ", j + 1);
            for (int k = 0; k < 3; k++)
                scanf("%d", &arr[i][j][k]);
            printf("\n"); // blank line after each row
        }
    }

    printf("\n--- Layer Comparison Results ---\n\n");

    for (layerA = 0; layerA < 3; layerA++) {
        for (layerB = layerA + 1; layerB < 3; layerB++) {
            same = 1;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    if (arr[layerA][i][j] != arr[layerB][i][j])
                        same = 0;

            printf("Layer %d and Layer %d are %s\n\n", layerA + 1, layerB + 1, same ? "IDENTICAL" : "DIFFERENT");
        }
    }

    return 0;
}
