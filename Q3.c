#include <stdio.h>

int main() {
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int (*ptr)[3] = arr;
    int temp;

    printf("Before swapping:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    for (int j = 0; j < 3; j++) {
        temp = *(*(ptr + 0) + j);
        *(*(ptr + 0) + j) = *(*(ptr + 1) + j);
        *(*(ptr + 1) + j) = temp;
    }

    printf("\nAfter swapping:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
