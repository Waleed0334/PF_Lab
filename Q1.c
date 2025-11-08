#include <stdio.h>
int main() {
    int n;
    printf("How many number you wants to enter:\n");
    scanf("%d",&n);
    int arr[n], temp[n];

    printf("Enter %d numbers: ",n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i == 0)
            temp[i] = arr[i];
        else
            temp[i] = temp[i - 1] + arr[i];
    }

    printf("Output array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", temp[i]);

    }
    return 0;
}
