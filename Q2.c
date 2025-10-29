#include <stdio.h>
int main() {
    int arr[10];
    int diffA;
    int diffV;
    int num;
    int *p = arr;

    for(int i = 0; i < 10; i++) {
        printf("Enter Number\n");
        scanf("%d", &num);
        arr[i] = num;
    }

    for (int i = 0; i < 10; i++) {
        printf("ADDRESS: %p | VALUE: %d\n", (p + i), *(p + i));
    }
    printf("---------------------------------------\n");
    for (int i = 1; i < 10; i++) {
        diffA = (p + i) - (p + (i - 1));
        diffV = *(p + i) - *(p + (i - 1));
        printf("Address difference of element[%d] and element[%d]: %d\n", i, i - 1, diffA);
        printf("Value difference of element[%d] and element[%d]: %d\n", i, i - 1, diffV);
        printf("\n");
    }

    return 0;
}
