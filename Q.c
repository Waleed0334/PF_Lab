#include <stdio.h>
int main() {
    int arr[3][3][3], layerSum, totalSum = 0;

    printf("Enter 27 elements for 3x3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        printf("\n--- Layer %d ---\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Enter 3 elements for row %d: ", j + 1);
            for (int k = 0; k < 3; k++)
                scanf("%d", &arr[i][j][k]);
            printf("\n");  
        }
    }

    for (int layer = 0; layer < 3; layer++) {
        layerSum = 0;
        printf("\nLayer %d:\n", layer + 1);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", arr[layer][i][j]);
                layerSum += arr[layer][i][j];
            }
            printf("\n");
        }
        printf("Sum of Layer %d = %d\n", layer + 1, layerSum);
        totalSum += layerSum;
    }

    printf("\nOverall Sum of all elements = %d\n", totalSum);

    return 0;
}

