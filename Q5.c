#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min;
    int num=1;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
    	printf("number %d is : ",num);
        scanf("%d", &arr[i]);
        num++;
    }

    max = min = arr[0];  

    for (i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Difference = %d\n", max - min);

    return 0;
}

